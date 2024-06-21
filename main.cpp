#include <stdio.h>
#include "DeathEater.h"
#include "Dementor.h"
int main() {
	DeathEater* deathEater[3];
	for (int i = 0; i < 3; ++i) {
		if (i < 1) {
			deathEater[i] = new Dementor;
		}
		else {
			deathEater[i] = new DeathEater;
		}
	}

	for (int i = 0; i < 3; ++i) {
		deathEater[i]->Attack();
	}

	return 0;
}