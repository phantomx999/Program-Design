/*
  Written by Andrew Steinbrueck
  Copyright December 2018
*/

#include <iostream>
#include <string>
#include <cmath>
#include "mia/image_editor_commands.h"
#include "mia/command_line_processor.h"
#include "mia/command_execution.h"
#include "gtest/gtest.h"

using image_tools::ColorData;
using image_tools::PixelBuffer;
using image_tools::ImageEditor;
using image_tools::CommandLineProcessor;
using image_tools::CommandExecution;
// using image_tools::ImageEditorCommands;

class CommandLineTest : public ::testing::Test {
    void SetUp() override {
      line_ = new CommandLineProcessor();
    }
    
    void TearDown() override {
      delete line_;
    }
  protected:
    CommandLineProcessor* line_;
};

std::string help_message = "\nusage: mia infile.png [image processing commands ...] outfile.png\n\ninfile.png:\t\tinput image file in png format\noutfile.png:\t\tfilename to use for saving the result\n\nimage processing commands:\n-blur r:\t\tapply a gaussian blur of radius r\n-edgedetect:\t\tapply an edge detection filter\n-sharpen r:\t\tapply a sharpening filter of radius r\n-red s:\t\t\tscale the red channel by factor s\n-green s:\t\tscale the green channel by factor s\n-blue s:\t\tscale the blue channel by factor s\n-quantize n:\t\tquantize each color channel into n bins\n-saturate s:\t\tsaturate colors by scale factor s\n-threshold c:\t\tthreshold using cutoff value c\n-motionblur-n-s r:\t\tnorth-south motion blur with kernel radius r\n-motionblur-e-w r:\t\teast-west motion blur with kernel radius r\n-motionblur-ne-sw r:\t\t ne-sw motion blur with kernel radius r\n-motionblur-nw-se r:\t\t nw-se motion blur with kernel radius r\n\n";

TEST_F(CommandLineTest, UserLoadSaveInput) {
  const char* input_array[3] = {"./build/bin/mia", "./resources/pikachu.png", "./resources/pikachu0.png"};
  //  input_array[0] = "build/bin/mia";
  //  input_array[1] = "pikachu.png";
  //  input_array[2] = "pikachu0.png"
  std::vector<std::string> correct_input(input_array, input_array + 3);
  line_->ProcessCommandLine(3, correct_input);
  EXPECT_EQ(2, line_->GetExecutor()->GetNumberOfCommands());
  EXPECT_EQ("load", (line_->GetExecutor()->GetMCommands())[0]->GetName());
  EXPECT_EQ("save", (line_->GetExecutor()->GetMCommands())[1]->GetName()); 
}

//  will print help message
TEST_F(CommandLineTest, UserInputHelpArgument) {
  const char* input_array[2] = {"./build/bin/mia", "-h"};
  //input_array[0] = "build/bin/mia";
  //input_array[1] = "-h";
  //input_array[2] = "-edgedetect";
  //input_array[3] = "pikachu2.png"
  std::vector<std::string> correct_input(input_array, input_array + 2);
  line_->ProcessCommandLine(2, correct_input);
 // EXPECT_FALSE(5, line_->execution_->GetNumberOfCommands());
 // EXPECT_FALSE("-edgedetect", line_->execution_[1]->GetName());
 // EXPECT_FALSE("pikachu.png", line_->execution_[0]->GetFile());
 // EXPECT_FALSE("save", line_->execution_[1]->GetName()); 
}

TEST_F(CommandLineTest, UserInputOneFilter) {
  const char* input_array[5] = {"./build/bin/mia", "./resources/pikachu.png", "-green", "4.3", "./resources/pikachu2.png"};
  std::vector<std::string> correct_input(input_array, input_array + 5);
  line_->ProcessCommandLine(5, correct_input);
  EXPECT_EQ(3, line_->GetExecutor()->GetNumberOfCommands());
  EXPECT_EQ("load", (line_->GetExecutor()->GetMCommands())[0]->GetName());
  EXPECT_EQ("-channel", (line_->GetExecutor()->GetMCommands())[1]->GetName());
  EXPECT_EQ("save", (line_->GetExecutor()->GetMCommands())[2]->GetName()); 
}

TEST_F(CommandLineTest, CorrectUserInputCommands) {
  const char* input_array[6] = {"./build/bin/mia", "./resources/pikachu.png", "-sharpen", "5", "-edgedetect", "./resources/pikachu3.png"};
  std::vector<std::string> correct_input(input_array, input_array + 6);
  line_->ProcessCommandLine(5, correct_input);
  EXPECT_EQ(4, line_->GetExecutor()->GetNumberOfCommands());
  EXPECT_EQ("load", (line_->GetExecutor()->GetMCommands())[0]->GetName());
  EXPECT_EQ("-sharpen", (line_->GetExecutor()->GetMCommands())[1]->GetName());
  EXPECT_EQ("-edgedetect", (line_->GetExecutor()->GetMCommands())[2]->GetName());
  EXPECT_EQ("save", (line_->GetExecutor()->GetMCommands())[4]->GetName());
}

TEST_F(CommandLineTest, CorrectUserLotsOfCommands) {
  const char* input_array[10] = {"./build/bin/mia", "./resources/pikachu.png","-saturate", "5", "-edgedetect", "-blue", "2.1", "-threshold", 
                           "3", "./resources/pikachu5.png"};
  std::vector<std::string> correct_input(input_array, input_array + 10);
  line_->ProcessCommandLine(10, correct_input);
  EXPECT_EQ(6, line_->GetExecutor()->GetNumberOfCommands());
  EXPECT_EQ("load", (line_->GetExecutor()->GetMCommands())[0]->GetName());
  EXPECT_EQ("-saturate", (line_->GetExecutor()->GetMCommands())[1]->GetName());
  EXPECT_EQ("-edgedetect", (line_->GetExecutor()->GetMCommands())[2]->GetName());
  EXPECT_EQ("-channel", (line_->GetExecutor()->GetMCommands())[3]->GetName());
  EXPECT_EQ("-threshold", (line_->GetExecutor()->GetMCommands())[4]->GetName());
  EXPECT_EQ("save", (line_->GetExecutor()->GetMCommands())[5]->GetName());
}









