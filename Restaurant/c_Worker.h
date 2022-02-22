#pragma once
#include<iostream>
#include"c_Kitchen.h"
class c_Worker
{
	c_Kitchen* kitchen;
public:
	c_Worker()
	{
		this->kitchen = new c_Kitchen();
	}
	void On_Plate()
	{
		std::cout << "Plate On \n";
		kitchen->On_Plate();
			
	}
};

