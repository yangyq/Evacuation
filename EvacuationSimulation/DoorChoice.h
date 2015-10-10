#pragma once
#include "GlobalData.h"
#include "Neighbor.h"
#include "Visible.h"
class DoorChoice
{
public:
	DoorChoice(void);
	virtual ~DoorChoice(void);

	void choice(GlobalData *globalData);
};

