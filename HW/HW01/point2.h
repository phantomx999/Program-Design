#ifndef POINT2_H
#define POINT2_H

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
#endif
