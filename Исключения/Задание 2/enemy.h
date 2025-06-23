#ifndef ENEMY_H
#define ENEMY_H

#include "character.h"

class Enemy : public Character {
private:
    Weapon weapon;

public:
    Enemy(int x, int y, const Weapon& weapon, int hp);
    void attack(Character& target) override;
};

#endif // ENEMY_H