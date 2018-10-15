/*
	Copyright 2018
*/

// #include <iostream>
#include <math.h>

#include "HW01/point2.h"

Point2::Point2(){
  setX(0.0);
  setY(0.0);
}

Point2::Point2(float x, float y){
  setX(x);
  setY(y);
}

Point2::~Point2(){

}

void Point2::setX(float x){
  x_ = x;
}

void Point2::setY(float y){
  y_ = y;
}

float Point2::getX(){
  return x_;
}

float Point2::getY(){
  return y_;
}

float Point2::DistanceBetween(Point2 p2){
  float distance;
  int z;
  z = sqrt(pow((p2.getX() - getX()), 2.0) + pow((p2.getY() - getY()), 2.0)); 
  distance = z;  
return distance;
}





