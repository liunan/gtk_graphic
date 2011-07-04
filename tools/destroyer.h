#ifndef LN_DESTROYER__H
#define LN_DESTROYER__H
#include "config.h"

BEGIN_NAMESPACE
/*
 * Destroyer is resouce holder class which is used for limited resouce management.
 * Destroyer must can access constructor and deconstructor of type T.
 */
template<typename T>
class Destroyer{
	public:
		Destroyer():m_holder(0){}
		~Destroyer()
		{
			delete m_holder;
			m_holder = 0;
		}
		T* GetKeptPtr()
		{
			if(!m_holder)
				m_holder = new T;
			return m_holder;
		}
	private:
		T* m_holder;
};
END_NAMESPACE

#endif

