#pragma once
class DeathEater
{
public:
	DeathEater() { name = "DeathEater"; }
	~DeathEater(){}
	/// <summary>
	/// 攻撃
	/// </summary>
	virtual void Attack();
protected:
	const char* name;
};

