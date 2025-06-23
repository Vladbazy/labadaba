#include "Student.h"
#include <sstream>

Student::Student() {
    this->scores = {};
}

Student::Student(const string& name, const string& surname, const string& patronymic, const vector<int>& scores) {
    this->name = name;
    this->surname = surname;
    this->patronymic = patronymic;
    this->scores = scores;
}

void Student::addScore(int score) {
    if (score >= 0 and score <= 5) {
        scores.push_back(score);
    }
}

double Student::getAverageScore() const {
    int sum = 0;

    for (int score : scores) {
        sum += score;
    }

    return static_cast<double>(sum) / scores.size();
}

string Student::getShortStudentInfo() const {
    ostringstream oss;
    oss << getSurnameAndInitials() << ": " << getAverageScore();
    return oss.str();
}

string Student::getFullStudentInfo() const {
    ostringstream oss;
    oss << getFullName();

    if (!scores.empty()) {
        oss << ", Scores: ";
        for (int i = 0; i < scores.size(); i++) {
            oss << scores[i];
            if (i != scores.size() - 1) {
                oss << ", ";
            }
        }
    }
    else {
        oss << ", Scores: EMPTY";
    }

    oss << ", Average Score: " << getAverageScore();
    return oss.str();
}