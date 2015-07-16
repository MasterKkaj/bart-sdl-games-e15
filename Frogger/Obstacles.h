#ifndef OBSTACLES_H
#define OBSTACLES_H

#include "Sprite.h"

class Obstacles :
	public Sprite
{
public: 
	enum Direction {
		GAUCHE,
		DROITE
	};

	Obstacles();
	virtual ~Obstacles();

private:
	Direction mDir;
	float mSpd;
};

#endif