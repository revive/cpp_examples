#ifndef RESEARCH_ACTIONS_H_
#define RESEARCH_ACTIONS_H_

#include "actions.h"

class ResearchActions : public virtual Actions {
public:
    virtual void MoveBricks () = 0;
};

#endif RESEARCH_ACTIONS_H_
