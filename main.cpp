#include <stdio.h>
#include "Cat.h"
#include "Dog.h"
#include "Chicken.h"
int main() {
	Animal* animal[3];
	for (int i = 0; i < 3; ++i) {
		if (i < 1) {
			animal[i] = new Cat("猫ちゃん");
		}
		else if (i < 2) {
			animal[i] = new Dog("ワンちゃん");
		}
		else {
			animal[i] = new Chicken("鶏ちゃん");
		}
	}

	for (int i = 0; i < 3; ++i) {
		animal[i]->Cry();
	}
	return 0;
}