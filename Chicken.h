#pragma once
#include "Animal.h"
class Chicken: public Animal
{
public:
	Chicken(const char* name) { name_ = name; }
	/// <summary>
	/// 鶏の鳴き声
	/// </summary>
	void Cry() override;
};

