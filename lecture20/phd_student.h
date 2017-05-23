#ifndef PHD_STUDENT_H_
#define PHD_STUDENT_H_

#include "student.h"
#include "research.h"

class PhdStudent : public Student, public ResearchActions {
public:
    PhdStudent () = default;
    void SetAdvisor (const std::string s) { advisor_name_ = s; }
    const std::string & GetAdvisor () { return advisor_name_; }

    void MoveBricks () {
        std::cout << "A PhD student is moving the bricks." << std::endl;
    }
private:
    std::string advisor_name_;
};

#endif // PHD_STUDENT_H_
