#ifndef PHOTON_H_
#define PHOTON_H_

#include "particle.h"

#include <cmath>

class Photon final : public Particle {

public:
    Photon () : Particle{"photon"}, polarization_{1, 0, 0} {
        mass_ = 0;
        mean_life_ = INFINITY;
    }

    Photon (const Photon & photon) = default;

    Photon & operator= (const Photon & rhs) = default;

    void Decay() override;

    void SetPolarization (const Vector3D & polar) { polarization_ = polar; }

    const Vector3D & GetPolarization () const { return polarization_; }

private:

    Vector3D polarization_;
};

#endif // PHOTON_H_
