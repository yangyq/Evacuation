#pragma once
#include "Agent.h"
#include "Obstacle.h"
#include "Door.h"
#include <iostream>

enum Route_Choice {
	Potential_METHOD = 0
};

enum Collision_Choice{
	SOCIAL_FORCE = 0,
	RVO
};

class GlobalData
{
public:
	GlobalData(void);
	~GlobalData(void);

	void initGlobleData();
	void update();


	int agentNum;
	int obstacleNum;
	int doorNum;

	Agent *agent;
	Obstacle *obstacle;
	Door *door;

	int nowTime;
	int maxTime;

	int mapSize_x;
	int mapSize_y;
	
	Route_Choice routeChoice;
	Collision_Choice collisionChoice;


};

