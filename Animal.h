#pragma once
class Animal
{
public:
	/// <summary>
	/// 鳴き声
	/// </summary>
	virtual void Cry();
protected:
	const char* name_;
};

