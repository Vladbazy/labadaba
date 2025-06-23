#ifndef STUDENT_H
#define STUDENT_H

#include "Human.h"
#include <vector>

class Student : public Human {
    vector<int> scores;

public:
    Student();
    Student(const string& name, const string& surname, const string& patronymic, const vector<int>& scores);

    void addScore(int score);
    double getAverageScore() const;
    string getShortStudentInfo() const;
    string getFullStudentInfo() const;

    const vector<int>& getScores() const { return scores; }
};

#endif // STUDENT_H