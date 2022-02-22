#pragma once
#include<iostream>
class c_Fridge
{
	bool On_Off;
public:
	c_Fridge()
	{
		this->On_Off = true;
	}
	void On_Fridge()
	{
		this->On_Off = true;
	}
	void Off_Fridge()
	{
		this->On_Off = false;
	}
};

