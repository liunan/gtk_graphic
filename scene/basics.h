#ifndef LN_BASIC__H
#define LN_BASIC__H

namespace Graphic
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

	template<typename T>
	class Rect{
		public:
			typedef Rect<T> self_type;
			typedef Point<T> point_type;
			Rect():m_left(0),m_top(0),m_right(0),m_bottom(0){}
			Rect(T left,T top,T right,T bottom):m_left(left),m_top(top),m_right(right),m_bottom(bottom){}
			point_type GetLeftTop()const{return point_type(m_left,m_top);}
			point_type GetRightBottom()const{return point_type(m_right,m_bottom);}
		public:
			bool IsInRect(T x,T y)const
			{
				return false;
			}
			bool IsInRect(const self_type& another)const
			{
				return false;
			}
			bool IsInsects(self_type& another)const
			{
				return false;
			}
			self_type& Insects(const self_type& another)
			{
				return *this;
			}
			self_type& Union(const self_type& another)
			{
				return *this;
			}
		private:
			T m_left;
			T m_top;
			T m_right;			
			T m_bottom;
	};
}

#endif
