#include "Animal.h"
#include "AnimalsInZoo.h"

using namespace std;

AnimalsInZoo::AnimalsInZoo(){
	numAnimals = 0;
}
AnimalsInZoo::AnimalsInZoo(Animal an){
	numAnimals = 1;
	animal = an;
}
void AnimalsInZoo::display(){
	cout << "Number of Animals in Zoo: " << numAnimals << endl;
	if (numAnimals > 0){
		animal.display();
	}
}
