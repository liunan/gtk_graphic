#ifndef LN_RECT__H
#define LN_RECT__H
#include "Point.h"

namespace Graphic::Core{
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

