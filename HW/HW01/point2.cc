#include "point2.h"
#include <math.h>

Point2::Point2() {
	m_x = 0.0;
	m_y = 0.0;
}

Point2::Point2(float x, float y) {
	m_x = x;
	m_y = y;
}

float Point2::DistanceBetween(Point2 p) {
	return sqrt((m_x - p.m_x)*(m_x - p.m_x) + (m_y - p.m_y)*(m_y - p.m_y));
}
