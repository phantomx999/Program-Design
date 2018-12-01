/**
This file is part of the CSCI-3081W Project Support Code, which was developed
at the University of Minnesota.

This code is to be used for student coursework.  It is not an open source
project. Copyright (c) 2015-2018 Daniel Keefe, TAs, & Regents of the University
of Minnesota.

Original Author(s) of this File:
  Seth Johnson, 2/15/15, University of Minnesota

Author(s) of Significant Updates/Modifications to the File:
  Daniel Keefe, 2018, UMN -- ported to MinGfx
  ...
*/

#ifndef FLASHPHOTO_FLASHPHOTO_APP_H_
#define FLASHPHOTO_FLASHPHOTO_APP_H_

#include <imagetools/image_editor.h>
#include <mingfx.h>
#include <deque>
#include <map>
#include <string>
#include <vector>

namespace image_tools {

/** @brief The FlashPhoto GUI. This class creates a graphics window to display
 the current PixelBuffer and a graphical user interface to interact with it
 using Tools and Filters. */
class FlashPhotoApp : public mingfx::GraphicsApp {
 public:
  FlashPhotoApp(int width, int height, const ColorData &background_color);
  virtual ~FlashPhotoApp();

  /** Called when the mouse moves but no
   *  mouse buttons are currently pressed. */
  void OnMouseMove(const mingfx::Point2 &pos,
                   const mingfx::Vector2 &delta) override;

  /** Called when the user pushes the mouse left button. */
  void OnLeftMouseDown(const mingfx::Point2 &pos) override;

  /** Called when the user moves the mouse with the left button depressed. */
  void OnLeftMouseDrag(const mingfx::Point2 &pos,
                       const mingfx::Vector2 &delta) override;

  /** Called when the user releases the left mouse button. */
  void OnLeftMouseUp(const mingfx::Point2 &pos) override;

  /** This function is called when the user drags the corner of the window
   to resize it.  We need to detect that operation because it requires us to
   resize the underlying pixel buffer. */
  void OnWindowResize(int new_width, int new_height) override;

  /** This function gets called once per frame.  If the user is in the middle
   of using a tool that applies more "paint" over time, like a spray can, then
   this function is used to repeatedly apply the tool to the pixel buffer. */
  void UpdateSimulation(double dt) override;

  /** Used to setup the 2D GUI. */
  void InitNanoGUI() override;

  /** Used to initialize OpenGL graphics, including the texture used to draw
   the pixel buffer to the screen. */
  void InitOpenGL() override;

  /** Used to draw the cursor for the tool once each frame. */
  void DrawUsingNanoVG(NVGcontext *ctx) override;

  /** Used to draw the PixelBuffer to the screen once each frame. */
  void DrawUsingOpenGL() override;

  /** Loads a pixel buffer from a PNG formatted file. */
  void LoadFromFile(const std::string &filename);

  /** Saves the current pixel buffer to a PNG file. */
  void SaveToFile(const std::string &filename);

/*
  /// Four possible motion blur directions are supported
  enum MBlurDir {
    MBLUR_DIR_N_S,
    MBLUR_DIR_E_W,
    MBLUR_DIR_NE_SW,
    MBLUR_DIR_NW_SE
  };

  static std::string MotionBlurDirectionName(MBlurDir dir) {
    return mblur_dir_names_.find(dir)->second;
  }
*/
 

 private:
  void InitializeBuffers(ColorData initial_color, int width, int height);

  ImageEditor* image_editor_;
  mingfx::Texture2D display_texture_;
  mingfx::QuickShapes quick_shapes_;

  // Current state of the active tool as determined via user interaction
  std::string tool_name_;
  int tool_x_;
  int tool_y_;
  bool painting_;


  // state data saved during calls to StartStroke, AddToStroke, EndStroke
  Tool *current_tool_;
  ColorData tool_color_;
  float tool_radius_;


  // Variables updated by the GUI widgets
  float blur_radius_;
  float mblur_radius_;
  ImageEditor::MBlurDir mblur_dir_;
  float sharpen_radius_;
  float thresh_cutoff_;
  float sat_value_;
  float chan_r_;
  float chan_g_;
  float chan_b_;
  int quant_bins_;

/*
  ToolBlur t_blur_;
  ToolCalligraphyPen t_calligraphy_pen_;
  ToolChalk t_chalk_;
  ToolEraser t_eraser_;
  ToolHighlighter t_highlighter_;
  ToolPen t_pen_;
  ToolSprayCan t_spray_can_;
*/
 // PixelBuffer *current_buffer_;


  nanogui::Button *undo_btn_;
  nanogui::Button *redo_btn_;

  //void SaveStateForPossibleUndo();

  unsigned int max_undos_;
  //  std::deque<PixelBuffer *> saved_states_;   // undo
  //  std::deque<PixelBuffer *> undone_states_;  // redo

  /* Copy/move assignment/construction disallowed */
  FlashPhotoApp(const FlashPhotoApp &rhs) = delete;
  FlashPhotoApp &operator=(const FlashPhotoApp &rhs) = delete;

  //  static const std::map<MBlurDir, std::string> mblur_dir_names_;
};

} /* namespace image_tools */

#endif  // FLASHPHOTO_FLASHPHOTO_APP_H_
