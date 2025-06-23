#ifndef WEAPON_H
#define WEAPON_H

#include <string>
#include <iostream>

class Weapon {
private:
    std::string name;
    int damage;
    int range;

public:
    Weapon(const std::string& name, int damage, int range);
    const std::string& getName() const;
    int getDamage() const;
    int getRange() const;
    friend std::ostream& operator<<(std::ostream& os, const Weapon& weapon);
};

#endif // WEAPON_H