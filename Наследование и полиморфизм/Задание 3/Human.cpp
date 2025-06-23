#include "Human.h"

Human::Human() {
    name = "";
    surname = "";
    patronymic = "";
}

Human::Human(const string& name, const string& surname, const string& patronymic) {
    this->name = name;
    this->surname = surname;
    this->patronymic = patronymic;
}

string Human::getSurnameAndInitials() const {
    if (surname == "") return "Unknown";
    if (name == "" or patronymic == "") return surname + " Unknown";

    return surname + " " + name[0] + "." + patronymic[0] + ".";
}

string Human::getFullName() const {
    if (name == "") return surname + " Unknown " + patronymic;
    if (surname == "") return "Unknown " + name + " " + patronymic;
    if (patronymic == "") return surname + " " + name + " Unknown";
    return surname + " " + name + " " + patronymic;
}