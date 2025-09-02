#include "Animal.h"
#include "AnimalsInZoo.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();

   delete animal1;

   Animal animal3("American Eagle", 1776);
   AnimalsInZoo AnimalsInZoo(animal3);

   AnimalsInZoo.display();
}
