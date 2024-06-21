#include <stdio.h>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "Chicken.h"
int main() {
	Animal* cat = new Cat("猫ちゃん");
	Animal* dog = new Dog("ワンちゃん");
	Animal* chicken = new Chicken("鶏ちゃん");

	cat->Cry();
	dog->Cry();
	chicken->Cry();

	delete cat; delete dog; delete chicken;
	return 0;
}