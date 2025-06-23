#ifndef TEACHER_H
#define TEACHER_H

#include "Human.h"
#include <vector>

enum Position {
    ASSISTANT, // ассистент
    SENIOR_LECTURER, // старший преподаватель
    ASSOCIATE_PROFESSOR, // доцент
    HEAD_OF_DEPARTMENT, // заведующий кафедры
    PROFESSOR, // профессор
    UNKNOWN_POSITION
};

class Teacher : public Human {
    Position position;
    vector<string> subjects;

public:
    Teacher();
    Teacher(const string& name, const string& surname, const string& patronymic,
        Position position, const vector<string>& subjects);

    void addSubject(const string& subject);
    string getShortTeacherInfo() const;
    string getFullTeacherInfo() const;

    int getSubjectCount() const { return subjects.size(); }
    bool teachesSubject(const string& subject) const;
    Position getPosition() const { return position; }
};

#endif