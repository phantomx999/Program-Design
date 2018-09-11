#ifndef POINT2_H
#define POINT2_H

class Point2 {

	private:
		float m_x;
		float m_y;
	public:
		Point2();
		Point2(float x, float y);
		float DistanceBetween(Point2 p);

};

#endif
