/*
	filter.cc
	Copyright November 2018 by Andrew Steinbrueck
*/

#include <iostream>
#include <mingfx.h>
#include <deque>
#include <string>
#include <vector>
#include <map>

#include "flashphoto/color_data.h"
#include "flashphoto/pixel_buffer.h"
#include "flashphoto/float_matrix.h"
#include "flashphoto/filter.h"

namespace image_tools {

    //  Filter::Filter();
    //  Filter::~Filter(){};

    void Filter::ApplyToBuffer(PixelBuffer* buffer){
	//if(!can_copy_in_place){
	 // PixelBuffer* temp = buffer;
	//}
	//  SetupFilter();
	for(int row = 0; row < buffer->width(); row++){
	  for(int column = 0; column < buffer->height(); column++){
	    CalculateFilteredPixel(buffer, row, column);
	  } 
	}
	//  CleanupFilter();
    }
    
    //  void SetupFilter();
 
    //  ColorData Filter::CalculateFilteredPixel(PixelBuffer* buffer, int x, int y){};

    //  void Filter::CleanupFilter();

    bool Filter::can_copy_in_place(){
	return true;
    };

    


}
