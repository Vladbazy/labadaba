#include "weapon.h"
#include "exceptions.h"

Weapon::Weapon(const std::string& name, int damage, int range)
    : name(name), damage(damage), range(range) {
    if (damage <= 0) throw InvalidValueException("Damage must be positive");
    if (range <= 0) throw InvalidValueException("Range must be positive");
}

const std::string& Weapon::getName() const { return name; }
int Weapon::getDamage() const { return damage; }
int Weapon::getRange() const { return range; }

std::ostream& operator<<(std::ostream& os, const Weapon& weapon) {
    os << weapon.name;
    return os;
}