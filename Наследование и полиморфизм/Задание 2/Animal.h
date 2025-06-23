#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void breathe() const = 0;
    virtual void eat() const = 0;
    virtual ~Animal() = default;
};

class Fish : public Animal {
public:
    void breathe() const override;
    void eat() const override;
    void swim() const;
};

class Bird : public Animal {
public:
    void breathe() const override;
    void eat() const override;
    void layEggs() const;
};

class FlyingBird : public Bird {
public:
    void fly() const;
};

#endif //ANIMAL_H