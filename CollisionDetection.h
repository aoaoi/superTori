﻿#ifndef __COLLISION_DETECTION_H__
#define __COLLISION_DETECTION_H__

#pragma once
#include <iostream>
#include <string.h>
#include "main.h"


class CollisionDetection
{
private:
	Tornev m_tornev;
	BGA m_bg;
	Item m_item;
	Enemy m_enemy;
public:
	CollisionDetection::CollisionDetection(Tornev tornev, BGA bg);
	bool CollisionDetection::aitem(Item item);    //メンバ関数の定義
	bool CollisionDetection::enemi(Enemy enemy);
	bool CollisionDetection::tornevAttack(Enemy enemy);
};
#endif