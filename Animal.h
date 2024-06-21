#pragma once
class Animal
{
public:
	Animal(){}
	~Animal(){}
	/// <summary>
	/// 鳴き声
	/// </summary>
	virtual void Cry();
protected:
	const char* name_;
};

