#ifndef LN_POINT__H
#define LN_POINT__H
#include <config.h>

BEGIN_NAMESPACE

class Point{	 
public:
	Point():m_x(0),m_y(0){}
	Point(int x,int y):m_x(x),m_y(y){}
public:
	void SetPoint(int x,int y)
	{
		m_x = x;
		m_y = y;
	}
	void SetX(int x){m_x = x;}
	void SetY(int y){m_y = y;}
	int GetX()const{return m_x;}
	int GetY()const{return m_y;}
	Point& operator = (const Point& another)
	{
		m_x = another.m_x;
		m_y = another.m_y;
		return *this;
	}
	friend inline bool operator ==(const Point&,const Point);
	friend inline bool operator !=(const Point&,const Point);
private:
	int m_x;
	int m_y;
};

inline bool operator ==(const Point& pt1,const Point& pt2)
{
	return (pt1.m_x == pt2.m_x) && (pt1.m_y == pt2.m_y);
}
inline bool operator != (const Point& pt1,const Point& pt2)
{
	return (pt1.m_x != pt2.m_x) || (pt1.m_y != pt2.m_y);
}


END_NAMESPACE
#endif


