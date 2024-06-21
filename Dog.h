#pragma once
#include "Animal.h"
class Dog :public Animal
{
public:
	Dog(const char* name) { name_ = name; }
	~Dog(){}
	/// <summary>
	/// 犬の鳴き声
	/// </summary>
	void Cry() override;
};

