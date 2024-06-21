#pragma once
#include "Animal.h"
class Cat: public Animal
{
public:
	Cat(const char* name) { name_ = name; }
	/// <summary>
	/// 猫の鳴き声
	/// </summary>
	void Cry() override;
};

