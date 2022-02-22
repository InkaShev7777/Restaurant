#pragma once
#include<iostream>
#include"c_Plate.h"
#include"c_Hood.h"
#include"c_Ventilation.h"
#include"c_Fridge.h"
class c_Kitchen
{
	c_Plate* plate;
	c_Hood* hood;
	c_Ventilation* ventilation;
	c_Fridge* fridge;
public:
	c_Kitchen()
	{
		this->fridge = new c_Fridge();
		this->hood = new c_Hood();
		this->plate = new c_Plate();
		this->ventilation = new c_Ventilation();
	}
	void On_Plate()
	{
		plate->On_Plate();
	}

};

