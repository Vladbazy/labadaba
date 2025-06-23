#ifndef CHARACTER_H
#define CHARACTER_H

#include "weapon.h"
#include <string>

class Character {
protected:
    int x, y;
    int hp;
    std::string name;

public:
    Character(int x, int y, int hp, const std::string& name);
    virtual ~Character() = default;

    bool isAlive() const;
    void takeDamage(int amount);
    void move(int dx, int dy);
    int getX() const;
    int getY() const;
    int getHp() const;
    const std::string& getName() const;

    virtual void attack(Character& target) = 0;
};

#endif // CHARACTER_H