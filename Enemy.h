#pragma once
#include <thread>
#include <chrono>
using namespace std;

class Enemy {
public:
    /// <summary>
    /// 接近
    /// </summary>
    void Converge(); 
    /// <summary>
    /// 攻撃
    /// </summary>
    void Attack();
    /// <summary>
    /// 離脱
    /// </summary>
    void Retreat();
    /// <summary>
    /// 数秒経ったら出力関数
    /// </summary>
    void printDelay() {
        this_thread::sleep_for(chrono::seconds(1));
    }
    /// <summary>
    ///更新
    /// </summary>
    void Update();
private:
    //ポインター関数を宣言と代入
    void(Enemy::* action[3])() = {
        &Enemy::Converge,
        &Enemy::Attack,
        &Enemy::Retreat
    };
};