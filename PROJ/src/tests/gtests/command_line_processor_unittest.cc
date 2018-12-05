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
//#include "gtest/gtests.h"

using imagetools;

class CommandLineTest : public ::testing::Test {
    void Setup() override {
      line_ = new CommandLineProcessor();
    }
    
    void TearDown() override {
      delete line_;
    }
  protected:
    CommandLineProcessor* processor_;
};

std::string help_message = "\nusage: mia infile.png [image processing commands ...] outfile.png\n\ninfile.png:\t\tinput image file in png format\noutfile.png:\t\tfilename to use for saving the result\n\nimage processing commands:\n-blur r:\t\tapply a gaussian blur of radius r\n-edgedetect:\t\tapply an edge detection filter\n-sharpen r:\t\tapply a sharpening filter of radius r\n-red s:\t\t\tscale the red channel by factor s\n-green s:\t\tscale the green channel by factor s\n-blue s:\t\tscale the blue channel by factor s\n-quantize n:\t\tquantize each color channel into n bins\n-saturate s:\t\tsaturate colors by scale factor s\n-threshold c:\t\tthreshold using cutoff value c\n-motionblur-n-s r:\t\tnorth-south motion blur with kernel radius r\n-motionblur-e-w r:\t\teast-west motion blur with kernel radius r\n-motionblur-ne-sw r:\t\t ne-sw motion blur with kernel radius r\n-motionblur-nw-se r:\t\t nw-se motion blur with kernel radius r\n\n";

TEST_F(CommandLineTest, UserLoadSaveInput) {
  char** input_array = new char*[3];
  input_array[0] = "build/bin/mia";
  input_array[1] = "pikachu.png;
  input_array[2] = "pikachu0.png"
  std::vector<std::string> correct_input(input_array, + 3);
  line_->ProcessCommandLine(3, correct_input);
  EXPECT_EQ(2, line_->execution_->GetNumberOfCommands());
  EXPECT_EQ("pikachu.png", line_[0]->execution_->GetFile());
  EXPECT_EQ("load", line_->execution_[0]->GetName());
  EXPECT_EQ("pikachu0.png", line_[1]->execution_->GetFile()); 
  EXPECT_EQ("save", line_->execution_[1]->GetName()); 
}

//  will print help message
TEST_F(CommandLineTest, UserInputHelpArgument) {
  char** input_array = new char*[2];
  input_array[0] = "build/bin/mia";
  input_array[1] = "-h";
  //input_array[2] = "-edgedetect";
  //input_array[3] = "pikachu2.png"
  std::vector<std::string> correct_input(input_array, + 2);
  line_->ProcessCommandLine(2, correct_input);
  EXPECT_FALSE(5, line_->execution_->GetNumberOfCommands());
  EXPECT_FALSE("-edgedetect", line_->execution_[1]->GetName());
  EXPECT_FALSE("pikachu.png", line_->execution_[0]->GetFile());
  EXPECT_FALSE("save", line_->execution_[1]->GetName()); 
}

TEST_F(CommandLineTest, UserInputOneFilter) {
  char** input_array = new char*[5];
  input_array[0] = "build/bin/mia";
  input_array[1] = "pikachu.png";
  input_array[2] = "-green";
  input_array[3] = "4.3";
  input_array[4] = "pikachu2.png"
  std::vector<std::string> correct_input(input_array, + 5);
  line_->ProcessCommandLine(5, correct_input);
  EXPECT_EQ(3, line_->execution_->GetNumberOfCommands());
  EXPECT_EQ("load", line_->execution_[0]->GetName());
  EXPECT_EQ("pikachu.png", line_->execution_[0]->GetFile());
  EXPECT_EQ("-green", line_->execution_[1]->GetName());
  EXPECT_EQ("4.3", line_->execution_[1]->GetColor());
  EXPECT_EQ("pikachu2.png", line_[2]->execution_->GetFile());
  EXPECT_EQ("save", line_->execution_[2]->GetName()); 
}

TEST_F(CommandLineTest, CorrectUserInputCommands) {
  char** input_array = new char*[6];
  input_array[0] = "build/bin/mia";
  input_array[1] = "pikachu.png"
  input_array[2] = "-sharpen";
  input_array[3] = "5";
  input_array[4] = "-edgedetect";
  input_array[5] = "pikachu3.png"
  std::vector<std::string> correct_input(input_array, + 5);
  line_->ProcessCommandLine(5, correct_input);
  EXPECT_EQ(4, line_->execution_->GetNumberOfCommands());
  EXPECT_EQ("pikachu.png", line_->execution_[0]->GetFile());
  EXPECT_EQ("load", line_->execution_[0]->GetName());
  EXPECT_EQ("-sharpen", line_->execution_[1]->GetName());
  EXPECT_EQ("5", line_->execution_[1]->GetValue());
  EXPECT_EQ("-edgedetect", line_->execution_[2]->GetName());
  EXPECT_EQ("pikachu3.png", line_->execution_[3]->GetFile());
  EXPECT_EQ("save", line_->execution_[3]->GetName());
}

TEST_F(CommandLineTest, CorrectUserLotsOfCommands) {
  char** input_array = new char*[10];
  input_array[0] = "build/bin/mia";
  input_array[1] = "pikachu.png"
  input_array[2] = "-saturate";
  input_array[3] = "5";
  input_array[4] = "-edgedetect";
  input_array[5] = "-blue";
  input_array[6] = "2.1";
  input_array[7] = "-threshold";
  input_array[8] = "3";
  input_array[9] = "pikachu3.png"
  std::vector<std::string> correct_input(input_array, + 10);
  line_->ProcessCommandLine(10, correct_input);
  EXPECT_EQ(5, line_->execution_->GetNumberOfCommands());
  EXPECT_EQ("pikachu.png", line_->execution_->GetFile());
  EXPECT_EQ("load", line_->execution_->GetName());
  EXPECT_EQ("-saturate", line_->execution_->GetName());
  EXPECT_EQ("5", line_->execution_->GetValue());
  EXPECT_EQ("-edgedetect", line_->execution_->GetName());
  EXPECT_EQ("-blue", line_->execution_->GetName());
  EXPECT_EQ("2.1", line_->execution_->GetColor());
  EXPECT_EQ("-threshold", line_->execution_->GetName());
  EXPECT_EQ("3", line_->execution_->GetValue());
  EXPECT_EQ("pikachu3.png", line_->execution_->GetFile());
  EXPECT_EQ("save", line_->execution_->GetName());
}









