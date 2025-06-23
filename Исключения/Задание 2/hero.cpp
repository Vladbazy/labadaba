#include "hero.h"
#include <iostream>

Hero::Hero(int x, int y, const std::string& name)
    : Character(x, y, 100, name) {}

void Hero::attack(Character& target) {
    if (weapons.empty()) {
        std::cout << "I'm unarmed!" << std::endl;
        return;
    }

    const Weapon& w = weapons[currentWeapon];
    std::cout << name << " attacks " << target.getName()
        << " with " << w << " (-" << w.getDamage() << " HP)" << std::endl;
    target.takeDamage(w.getDamage());
}

void Hero::addWeapon(const Weapon& weapon) {
    weapons.push_back(weapon);
    std::cout << name << " picked up " << weapon << std::endl;
}

void Hero::nextWeapon() {
    if (weapons.empty()) {
        std::cout << "No weapons!" << std::endl;
    }
    else if (weapons.size() == 1) {
        std::cout << "Only one weapon!" << std::endl;
    }
    else {
        currentWeapon = (currentWeapon + 1) % weapons.size();
        std::cout << "Switched to " << weapons[currentWeapon] << std::endl;
    }
}

void Hero::heal(int amount) {
    hp = (hp + amount > MAX_HP) ? MAX_HP : hp + amount;
    std::cout << name << " healed to " << hp << " HP" << std::endl;
}