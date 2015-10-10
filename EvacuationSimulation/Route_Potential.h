#pragma once
#include "route.h"
class Route_Potential :
	public Route
{
public:
	Route_Potential(void);
	~Route_Potential(void);
	 
	void route(GlobalData *gd);
};

