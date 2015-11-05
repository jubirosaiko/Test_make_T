#pragma once

class StageSelect;

class Stage
{
protected:
	StageSelect* manager;

public:
	Stage() = default;
	Stage(StageSelect* ref)
	{
		manager = ref;
	}
	virtual void update() = 0;
	virtual void draw() = 0;
};