#pragma once
#include "Animal.h"
class Dog :public Animal
{
public:
	Dog(const char* name) { name_ = name; }
	~Dog()override{}
	/// <summary>
	/// 犬の鳴き声
	/// </summary>
	void Cry() override;
};

