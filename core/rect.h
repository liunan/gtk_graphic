#ifndef LN_RECT__H
#define LN_RECT__H
#include "config.h"
#include "point.h"
#include <iostream>

BEGIN_NAMESPACE
class Rect{
public:			
	Rect():m_left(0),m_top(0),m_right(0),m_bottom(0){}
	Rect(int left,int top,int right,int bottom):m_left(left),m_top(top),m_right(right),m_bottom(bottom){}
	
	Point GetLeftTop()const{return Point(m_left,m_top);}
	Point GetRightBottom()const{return Point(m_right,m_bottom);}
	Point Center()const;
	int GetWidth()const{return (m_right -m_left +1);}
	int GetHeight()const{return (m_bottom -m_top +1);}
	void SetLeftTop(const Point& p){m_left = p.GetX();m_top = p.GetY();}
	void SetRightBottom(const Point& p){m_right = p.GetX();m_bottom = p.GetY();};
	void SetCoord(int left,int top,int right,int bottom);
	void SetRect(int x,int y,int w,int h);
	

public:
	inline bool IsEmpty()const;
	inline bool IsValid()const;

	inline bool IsInRect(int x,int y)const;			
	inline bool IsInRect(const Rect& another)const;
	inline bool IsIntersects(const Rect& another)const;			
	inline Rect& Intersect(const Rect& another);			
	inline Rect& Unite(const Rect& another);
	friend	std::ostream& operator<<(std::ostream& s,const Rect& r);		
private:
	int m_left;
	int m_top;
	int m_right;			
	int m_bottom;
};

inline bool Rect::IsEmpty()const
{
	return m_left > m_right || m_top > m_bottom;
}
inline bool Rect::IsValid()const
{
	return (m_left<=m_right) && (m_top <= m_bottom);
}

inline Point Rect::Center()const{
	return Point((m_left+m_right)>>1,(m_top+m_bottom)>>1);
}
inline void Rect::SetCoord(int left,int top,int right,int bottom)
{
	m_left = left,m_top = top;
	m_right = right,m_bottom = bottom;
}
inline void Rect::SetRect(int x,int y,int w,int h)
{
	m_left = x, m_top = y;
	m_right = x+w;
	m_bottom = y + h;
}

inline bool Rect::IsInRect(int x,int y)const
{

    return true;
}

inline bool Rect::IsInRect(const Rect& another)const{
	return true;
}

std::ostream& operator<<(std::ostream& s,const Rect& r)
{
	s<<"Rect:("<<r.m_left<<","<<r.m_top<<"),("<<r.m_right<<","<<r.m_bottom<<")\n";
	return s;
}

END_NAMESPACE

#endif


