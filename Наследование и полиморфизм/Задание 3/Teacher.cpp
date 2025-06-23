#include "Teacher.h"
#include <sstream>

string positionToString(Position position) {
    switch (position) {
    case ASSISTANT: return "Assistant";
    case SENIOR_LECTURER: return "Senior lecture";
    case ASSOCIATE_PROFESSOR: return "Associate professor";
    case HEAD_OF_DEPARTMENT: return  "Head of department";
    case PROFESSOR: return "Professor";
    default: return "unknown";
    }
}

Teacher::Teacher() {
    this->position = UNKNOWN_POSITION;
    this->subjects = {};
}

Teacher::Teacher(const string& name, const string& surname, const string& patronymic, Position position, const vector<string>& subjects) {
    this->name = name;
    this->surname = surname;
    this->patronymic = patronymic;
    this->position = position;
    this->subjects = subjects;
}

void Teacher::addSubject(const string& subject) {
    subjects.push_back(subject);
}

string Teacher::getShortTeacherInfo() const {
    ostringstream oss;
    oss << getSurnameAndInitials() << ", " << positionToString(position)
        << ": " << subjects.size();
    return oss.str();
}

string Teacher::getFullTeacherInfo() const {
    ostringstream oss;
    oss << getFullName() << ", " << positionToString(position) << ": ";

    if (!subjects.empty()) {
        for (int i = 0; i < subjects.size(); i++) {
            oss << subjects[i];
            if (i != subjects.size() - 1) {
                oss << ", ";
            }
        }
    }

    return oss.str();
}

bool Teacher::teachesSubject(const string& subject) const {
    for (const string& subj : subjects) {
        if (subj == subject) {
            return true;
        }
    }
    return false;
}