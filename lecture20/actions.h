#ifndef ACTIONS_H_
#define ACTIONS_H_

class Actions {
public:
    Actions () = default;
    virtual ~Actions() = default;

    virtual void Run() = 0;
};

#endif // ACTIONS_H_
