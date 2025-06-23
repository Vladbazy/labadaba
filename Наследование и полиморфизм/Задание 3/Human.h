#ifndef HUMAN_H
#define HUMAN_H

#include <string>
using namespace std;

class Human {
protected:
    string name;
    string surname;
    string patronymic;

public:
    Human();
    Human(const string& name, const string& surname, const string& patronymic);

    string getSurnameAndInitials() const;
    string getFullName() const;
};

#endif // HUMAN_H