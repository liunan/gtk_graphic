#ifndef LN_RECT__H
#define LN_RECT__H
#include "config.h"
#include "Point.h"

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
	void SetLeftTop(const Point& p);
	void SetRightBottom(const Point& p);
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

END_NAMESPACE

#endif


