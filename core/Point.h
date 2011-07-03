#ifndef LN_POINT__H
#define LN_POINT__H

namespace Graphic::Core
{
template<typename T>
	class Point{
	  typedef Point<T> self_type;
	  public:
		Point():m_x(0),m_y(0){}
		Point(T x,T y):m_x(x),m_y(y){}
	  public:
		void SetPoint(T x,T y)
	  {
		m_x = x;
		m_y = y;
	  }
		T GetX()const{return m_x;}
		T GetY()const{return m_y;}
		self_type& operator = (const self_type& another)
	  {
		m_x = another.x;
		m_y = another.y;
		return *this;
	  }
	  private:
		T m_x;
		T m_y;
	};

}
#endif

