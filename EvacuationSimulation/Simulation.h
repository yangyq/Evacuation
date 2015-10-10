#pragma once
#include "CollisionAvoidance.h"
#include "Display.h"
#include "Route.h"
#include "DoorChoice.h"
#include "Route_Potential.h"
#include "Collide_RVO.h"
#include "Collide_SocialForce.h"
class Simulation
{
public:
	Simulation(void);
	~Simulation(void);

	void simulate();
};
