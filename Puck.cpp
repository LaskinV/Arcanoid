#include "pch.h"
#include "Puck.h"



Puck::Puck()
{
	Puck_Pict.loadFromFile("C:/Users/laski/source/Arcanoid2/Arcanoid_Project/images/puck_1.png");
	Puck1.setTexture(Puck_Pict);
	Puck1.setPosition(330, 540);
}


Puck::~Puck()
{
}

void Puck::Ball_up()  //Начало движения шара при нажатии на кнопку
{
	dx_Puck = 3;
	dy_Puck = 2;
	Puck1.move(dx_Puck, 0);
	Puck1.move(0, dy_Puck);
}
