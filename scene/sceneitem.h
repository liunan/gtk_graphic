#ifndef SCENEITEM__H
#define SCENEITEM__H
#include <config.h>
#include <core/rect.h>

BEGIN_NAMESPACE

class SceneItem
{
	public:
		virtual Draw(int dest) = 0;
		virtual Rect GetBound()const = 0;

		virtual Selected()const;
		virtual Select(bool select);

};
END_NAMESPACE

#endif


