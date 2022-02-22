#pragma once
#include<iostream>
class c_Ventilation
{
	bool On_Off;
public:
	c_Ventilation()
	{
		this->On_Off = true;
	}
	void On_Ventilation()
	{
		this->On_Off = true;
	}
	void Off_Ventilation()
	{
		this->On_Off = false;
	}
};

