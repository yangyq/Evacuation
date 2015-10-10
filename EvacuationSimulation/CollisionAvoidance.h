#pragma once
#include "GlobalData.h"
#include "Neighbor.h"
#include "Visible.h"

class CollisionAvoidance
{
public:
	CollisionAvoidance(void);
	virtual ~CollisionAvoidance(void);

	virtual void avoid(GlobalData *){};
};

