#ifndef HUMAN_H_
#define HUMAN_H_

#include <string>

class Human {

public:
    Human () = default;
    Human (const std::string &name, char gender, double h, double w)
        : name_(name), gender_(gender), height_(h), weight_(w) {}
    Human (const Human & man) = default;
    virtual ~Human () = default;

    Human & operator=(const Human & man) = default;

    const std::string & GetName () { return name_; }
    void SetName(const std::string & name) { name_ = name; }

    char GetGender () { return gender_; }
    void SetGender (char c) { gender_ = c; }

    double GetHeight () { return height_;}
    void SetHeight (double h) { height_ = h; }

    double GetWeight () { return weight_;}
    void SetWeight (double w) { weight_ = w; }
    
protected:
    std::string name_ = "Zhang San";
    char gender_ = 'm';
    double height_ = 170;
    double weight_ = 60;
};

#endif // HUMAN_H_
