Common Tasks  {#common_tasks_dev}
===========

A common task for a programmer intending to use this project might be to add in their
own new filter.  This tutorial will teach a programmer how to implement a new filter
class into the project.  

1.  Decide what type of filter to be added (Convolution vs. Non-Convolution)

  -  If it's a Convolution filter, it will inherit from filter_convolution.h
  
  - If is not a convolution filter, it will inherit from filter.h
  
2.  Place filter in imagetools directory

3.  Include directory header guard for this new filter header file.  

4.  Include base class ".h" header include directives, as well as any other necessary
    header files.  

5. Use image_tools as a namespace for everything

  
6. Below is an example of convolution filter class template:
  
  //  filter_convolution_tutorial.h
  
  #ifndef IMAGETOOLS_FILTER_CONVOLUTION_TUTORIAL_H_
  #define IMAGETOOLS_FILTER_CONVOLUTION_TUTORIAL_H_
  
  #include imagetools/filter_convolution.h
  
  namespace image_tools {
  
  class ConvolutionFilterTutorial : public ConvolutionFilter {
    public:
      ConvolutionFilterTutorial();
      explicit ConvolutionFilterTutorial(float rad);
      virtual ~ConvolutionFilterTutorial();
    
      float getRadius();
      void setRadius(float rad);
    
      void CreateKernel() override;
      void setCopyBuffer(PixelBuffer* buffer);  
    protected:
      float radius_;
  };
  
 }  // namespace image_tools
  
#endif // IMAGETOOLS_FILTER_CONVOLUTION_TUTORIAL_H_
  
  
Below is an example of a non convolution filter template:

  //  filter_tutorial.h
  
  #ifndef IMAGETOOLS_FILTER_TUTORIAL_H_
  #define IMAGETOOLS_FILTER_TUTORIAL_H_
  
  #include imagetools/filter.h
  
  namespace image_tools {
  
  class FilterTutorial : public Filter {
    public:
      FilterTutorial();
      explicit FilterTutorial(int num);
      virtual ~FilterTutorial();
      void setNum(int num);
      int getNum();
      ColorData CalculateFilteredPixel(PixelBuffer* buffer,
                                     int x, int y) override;
    private:
      int num_;  
  };

 }  // namespace image_tools

#endif  // IMAGETOOLS_FILTER_TUTORIAL_H_


7. Next step is to implement the filter into the UI for both Flashphoto and Mia.
This will require adding the correct data member FilterTutorial tutorial into
the image_editor.h, as well as the correct data members for that particular 
FilterTutorial class in the Flashphoto and Mia apps (i.e. if necessary add data members 
into flashphoto_app.h constructor, same with mia_app.h)   

8.  Set up command line to use FilterTutorial as a command in command line mode.
    Below is an example:

// image_editor_commands.h

#ifndef MIA_IMAGE_EDITOR_COMMANDS_H_
#define MIA_IMAGE_EDITOR_COMMANDS_H_

#include <string>
#include "imagetools/color_data.h"
#include "imagetools/filter_convolution_motion_blur.h"
#include "imagetools/image_editor.h"

namespace image_tools {

  class TutorialFilterCommand : public ImageEditorCommand {
   public:
    TutorialFilterCommand(ImageEditor *image_editor, float radius);
    virtual ~TutorialFilterCommand();

    void Execute() override;
    inline float GetValue() {return radius_;}
    inline std::string GetName() override {return "-tutorial";}
   private:
    float radius_;
};

}  // namespace image_tools

#endif  // MIA_IMAGE_EDITOR_COMMANDS_H_   


9.  Lastly, the CommandLineProcesser needs to be able to read in the "tutorial" command.
    Add in the correct code into command_line_processor.cc (depending on your filter's
    data and constructor, examples might vary).  
    Here is a simple example below:
    
    // ......code above 
    TutorialFilterCommand* command1 = new BlurFilterCommand(editor_, next_arg);
    count_commands++;
    execution_->SetCommand(count_commands, command1);
    // ......more code below
       