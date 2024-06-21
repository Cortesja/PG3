#pragma once
#include "DeathEater.h"
class Dementor:public DeathEater
{
public:
	Dementor() { name = "Dementor"; }
	~Dementor(){}
	/// <summary>
	/// 攻撃
	/// </summary>
	void Attack() override;
};

