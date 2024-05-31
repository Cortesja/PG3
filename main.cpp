#include "Enemy.h"

int main() {
    Enemy* enemy = new Enemy(); //エネミー型のインスタンスを制作
    enemy->Update();//アップデート関数を呼び出す
    return 0;
}