#include "hero.h"
#include "enemy.h"
#include "exceptions.h"
#include <iostream>

int main() {
    try {
        Hero hero(0, 0, "Hero");
        Enemy enemy1(5, 0, Weapon("Sword", 15, 10), 50);
        Enemy enemy2(15, 0, Weapon("Bow", 10, 20), 30);

        hero.addWeapon(Weapon("Dagger", 10, 5));
        hero.addWeapon(Weapon("Staff", 8, 15));

        hero.attack(enemy1);
        hero.nextWeapon();
        hero.move(10, 0);
        hero.attack(enemy2);
        hero.heal(20);

    }
    catch (const GameException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}