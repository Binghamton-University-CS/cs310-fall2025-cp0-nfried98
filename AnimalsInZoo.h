#pragma once

#include "Animal.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class AnimalsInZoo{
	public:
		AnimalsInZoo();
		AnimalsInZoo(Animal an);
		void display();
	private:
		int numAnimals;
		Animal animal;
};
