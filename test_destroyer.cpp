#include <tools/destroyer.h>
#include <iostream>

using namespace std;
using namespace Graphic;
class Obj
{
	public:
		Obj()
		{cout<<"Obj constructed!"<<endl;}
		~Obj()
		{
			cout<<"Objdisposed!"<<endl;
		}

		static Obj* GetPtr()
		{
			return 	m_singleton.GetKeptPtr();
		}
	private:
		static	Destroyer<Obj> m_singleton;
};

typedef Destroyer<Obj> Singleton_type;

Singleton_type Obj::m_singleton;

int main()
{
	cout<<"Start of the main function!"<<endl;
	//	Obj obj;
	
	Obj* p =	Obj::GetPtr();
	cout<<"end of the main function!"<<endl;
	return 0;
}
