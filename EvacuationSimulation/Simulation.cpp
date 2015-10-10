#include "Simulation.h"


Simulation::Simulation(void)
{
}


Simulation::~Simulation(void)
{
}

void Simulation::simulate()
{

	//init
	GlobalData *gd = new GlobalData();
	gd->initGlobleData();

	Route *route = new Route();
	CollisionAvoidance *collision = new CollisionAvoidance();
	Display *display = new Display();

	switch (gd->routeChoice)
	{
	case Route_Choice::Potential_METHOD:
		{
		Route_Potential *rp = new Route_Potential();
		*route = *rp;
		break;
		}
	default:
		{
		Route_Potential *rp1 = new Route_Potential();
		*route = *rp1;
		break;
		}
	}

	switch(gd->collisionChoice)
	{
	case Collision_Choice::RVO:
		{
		Collide_RVO *rvo = new Collide_RVO();
		*collision = *rvo;
		break;
		}
	case Collision_Choice::SOCIAL_FORCE:
		{
		Collide_SocialForce *sf = new Collide_SocialForce();
		*collision = *sf;
		break;
		}
	default:
		{
		Collide_RVO *rvo1 = new Collide_RVO();
		*collision = *rvo1;
		break;
		}
	}

	//出口选择
	DoorChoice doorChoice;
	doorChoice.choice(gd);


	for(gd->nowTime = 0;gd->nowTime < gd->maxTime;gd->nowTime ++)
	{
		//路径规划
		route->route(gd);

		//碰撞避免
		collision->avoid(gd);

		//更新
		gd->update();

		//显示
		display->display(gd);
	}
}
