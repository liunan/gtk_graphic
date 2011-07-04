#include <iostream>
#include <core/point.h>
#include <core/rect.h>


using namespace std;

int main()
{
  using namespace Graphic;
  typedef Point point_type;
  point_type point(100,100);
  cout<<point.GetX()<<","<<point.GetY()<<endl;
  Rect r(100,100,150,200);
  cout<<r;

	return 0;
}
