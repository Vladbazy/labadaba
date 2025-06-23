#include "Animal.h"

void Fish::breathe() const {
    cout << "Fish breathe" << endl;
}

void Fish::eat() const {
    cout << "Fish eat" << endl;
}

void Fish::swim() const {
    cout << "Fish swim" << endl;
}

void Bird::breathe() const {
    cout << "Bird breathe" << endl;
}

void Bird::eat() const {
    cout << "Bird eat" << endl;
}

void Bird::layEggs() const {
    cout << "Bird lay eggs" << endl;
}

void FlyingBird::fly() const {
    cout << "Bird is flying" << endl;
}