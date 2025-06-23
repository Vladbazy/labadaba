#include "Animal.h"

int main() {
    Fish fish;
    Bird bird;
    FlyingBird flyingBird;

    cout << "Fish actions:" << endl;
    fish.breathe();
    fish.eat();
    fish.swim();

    cout << "\nBird actions:" << endl;
    bird.breathe();
    bird.eat();
    bird.layEggs();

    cout << "\nFlying bird actions:" << endl;
    flyingBird.breathe();
    flyingBird.eat();
    flyingBird.layEggs();
    flyingBird.fly();

    cout << "\nAnimal actions:" << endl;
    Animal* animalFish = &fish;
    Animal* animalBird = &bird;
    Animal* animalFlyingBird = &flyingBird;

    animalFish->breathe();
    animalFish->eat();

    animalBird->breathe();
    animalBird->eat();

    animalFlyingBird->breathe();
    animalFlyingBird->eat();

    return 0;
}