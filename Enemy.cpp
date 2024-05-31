#include "Enemy.h"
#include <iostream>
using namespace std;

void Enemy::Converge()
{
	cout << "エネミー接近してきた。。" << endl;
}

void Enemy::Attack()
{
	cout << "エネミーが攻撃してきた！！" << endl;
}

void Enemy::Retreat()
{
	cout << "エネミーが離脱したがっている！？" << endl;
}

void Enemy::Update()
{
	//ポインター関数の要素内まで呼び出す
	for (int i = 0; i < sizeof(action) / sizeof(action[0]); i++) {
		printDelay();
		(this->*action[i])();
	}
}
