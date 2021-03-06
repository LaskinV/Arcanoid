﻿#include "pch.h"
#include "BrickPile.h"
#include <SFML/Graphics.hpp>

//Расстановка блоков

using namespace sf;

BrickPile::BrickPile()
{

	_Brick_Pile = new Brick[_amount];

	for (int i = 1 + rand() % 10; i <= _bricks_x; i++) {
		for (int j = 2 + rand() % 10; j <= _bricks_y + 1; j++) {
			block[n].setTexture(_Brick_Pile[n].Brick_Pict);
			block[n].setPosition(i * 63, j * 30);
			n++;
		}
	}
}


BrickPile::~BrickPile()
{
	delete[] _Brick_Pile;
}
