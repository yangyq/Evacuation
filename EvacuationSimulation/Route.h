#pragma once
#include "GlobalData.h"
#include "Neighbor.h"
#include "Visible.h"
class Route
{
public:
	Route(void);
	virtual ~Route(void);

	virtual void route(GlobalData *){};
};

