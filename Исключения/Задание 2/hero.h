#ifndef HERO_H
#define HERO_H

#include "character.h"
#include <vector>

class Hero : public Character {
private:
    std::vector<Weapon> weapons;
    size_t currentWeapon = 0;
    static const int MAX_HP = 200;

public:
    Hero(int x, int y, const std::string& name);
    void attack(Character& target) override;
    void addWeapon(const Weapon& weapon);
    void nextWeapon();
    void heal(int amount);
};

#endif // HERO_H