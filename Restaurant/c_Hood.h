#pragma once
#include<iostream>
class c_Hood
{
	bool On_Off;
public:
	c_Hood()
	{
		this->On_Off = false;
	}
	void On_Hood()
	{
		this->On_Off = true;
	}
	void Off_Hood()
	{
		this->On_Off = false;
	}
};

