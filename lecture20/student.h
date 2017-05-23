#ifndef STUDENT_H_
#define STUDENT_H_

#include "human.h"
#include "actions.h"

class Student : public Human, public virtual Actions {

public:
    Student () = default;
    using Human::Human;

    Student (const std::string &name, char gender, double h, double w,
             const std::string & s)
        : Human(name, gender, h, w), school_(s) {}

    // inheriate from Action.
    void Run ();

    const std::string & GetSchool () { return school_; }
    void SetSchool (const std::string & s) { school_ = s; }
private:
    std::string school_;
};

#endif // STUDENT_H_
