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

  
Below is an example of convolution filter class template:
  
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

  


       