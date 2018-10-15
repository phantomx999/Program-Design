/*
	Copyright 2018
*/

#ifndef HW01_POINT2_H_
#define HW01_POINT2_H_

class Point2{
 public:
  Point2();
  Point2(float x, float y);
  virtual ~Point2();
  void setX(float x);
  void setY(float y);
  float getX();
  float getY();
  float DistanceBetween(Point2 p2);
 private:
  float x_;
  float y_;
};
#endif  // HW01_POINT2_H_
