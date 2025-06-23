#include "character.h"
#include "exceptions.h"

Character::Character(int x, int y, int hp, const std::string& name)
    : x(x), y(y), hp(hp), name(name) {
    if (hp <= 0) throw InvalidValueException("Health must be positive");
}

bool Character::isAlive() const { return hp > 0; }

void Character::takeDamage(int amount) {
    if (amount <= 0) throw InvalidValueException("Damage must be positive");
    hp -= amount;
}

void Character::move(int dx, int dy) {
    x += dx;
    y += dy;
}

int Character::getX() const { return x; }
int Character::getY() const { return y; }
int Character::getHp() const { return hp; }
const std::string& Character::getName() const { return name; }