#ifndef SCENE__H
#define SCENE__H

class SceneItem;
class Scene{
public:
	void ZoomIn();
	void ZoomOut();
	//ratio >0
	void ZoomTo(unsigned ratio);
	void Pan(int dx,int dy);
	//获取指定位置的项
	SceneItem* GetSceneItem(int ix,int iy);
//	SceneItem* GetSceneItem(

};

#endif
