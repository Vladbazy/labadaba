#include "enemy.h"
#include <iostream>

Enemy::Enemy(int x, int y, const Weapon& weapon, int hp)
    : Character(x, y, hp, "Enemy"), weapon(weapon) {}

void Enemy::attack(Character& target) {
    std::cout << name << " attacks " << target.getName()
        << " with " << weapon << " (-" << weapon.getDamage() << " HP)" << std::endl;
    target.takeDamage(weapon.getDamage());
}