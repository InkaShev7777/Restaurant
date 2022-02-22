#pragma once
#include<iostream>
class c_Plate
{
	bool On_Off;
public:
	c_Plate()
	{
		this->On_Off = false;
	}
	void On_Plate()
	{
		this->On_Off = true;
	}
	void Off_Plate()
	{
		this->On_Off = false;
	}
};

