#include "pch.h"
#include "Paddle.h"


Paddle::Paddle()
{
	Paddle_Pict.loadFromFile("C:/Users/laski/source/Arcanoid2/Arcanoid_Project/images/paddle.png");
	Paddle1.setTexture(Paddle_Pict);
	Paddle1.setPosition(300, 580);

}



Paddle::~Paddle()
{
}