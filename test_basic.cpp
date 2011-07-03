#include <scene/basics.h>
#include <iostream>

using namespace std;

int main()
{
  using namespace Graphic;
  typedef Point<int> point_type;
  point_type point(100,100);
  cout<<point.GetX()<<","<<point.GetY()<<endl;
	return 0;
}