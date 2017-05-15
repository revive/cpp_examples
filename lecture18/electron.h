#ifndef ELECTRON_H_
#define ELECTRON_H_

#include "particle.h"

#include <cmath>

class Electron : public Particle {
public:
    Electron () : Particle{"photon"} {
        mass_ = 0.5109989461;
        charge_ = -1;
        spin_ = 0.5;
        mean_life_ = INFINITY;
    }

    Electron (const Electron & photon) = default;

    Electron & operator= (const Electron & rhs) = default;

    void Decay() override;
};

#endif // ELECTRON_H_
