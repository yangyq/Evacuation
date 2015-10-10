#pragma once
#include "collisionavoidance.h"
class Collide_SocialForce :
	public CollisionAvoidance
{
public:
	Collide_SocialForce(void);
	~Collide_SocialForce(void);
	void avoid(GlobalData *globalData);
};

