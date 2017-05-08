#ifndef TTYPE_H_
#define TTYPE_H_

#include <string>

struct f {
    int i = 1;
    double d = 0;
};

struct g {
    int i = 1;
    double d = 0;
};

class Vector3D;

struct h {
    int i = 1;
    Vector3D * v = nullptr;

    int hh () {
        int i = 3;
        return i;
    }
};

// Particle in particle physics
class Particle {
    // other functions
private:
    int id_;
    Particle *parent_;
};

struct t {
    int i = 1;
    int &j;
    const int k;

    t(): i{1}, j{i}, k{1} {}
    t(int v): i{v}, j{i}, k{i} {}
};

struct data {
    int id;
    double x;
    double y;
    std::string comment;
};

struct Debug {
    int id;
    bool status;
};

#endif
