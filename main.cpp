#include <stdio.h>
#include "Cat.h"
#include "Dog.h"
#include "Chicken.h"
int main() {
	Cat* cat = new Cat("猫ちゃん");
	Dog* dog = new Dog("ワンちゃん");
	Chicken* chicken = new Chicken("鶏ちゃん");

	cat->Cry();
	dog->Cry();
	chicken->Cry();

	delete cat; delete dog; delete chicken;
	return 0;
}