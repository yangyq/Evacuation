#pragma once
#include "collisionavoidance.h"
class Collide_RVO :
	public CollisionAvoidance
{
public:
	Collide_RVO(void);
	~Collide_RVO(void);
	void avoid(GlobalData *globalData);
};

