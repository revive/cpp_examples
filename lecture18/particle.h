#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "lorentz_vector.h"
#include "vector_3d.h"

#include <string>

// this header defines the particle in particle physics
class Particle {

public:
    Particle () = default;
    explicit Particle (const std::string & type);
    Particle (const Particle & particle) = default;

    virtual ~Particle () = default;

    Particle & operator=(const Particle & rhs) = default;

    const std::string & GetType() const { return type_; }
    double GetMass () const { return mass_; }
    double GetCharge () const { return charge_; }
    double GetSpin () const { return spin_; }
    double GetMeanLife () const { return mean_life_; }

    void SetTime (double t) { t_ = t; }
    double GetTime () const { return t_; }

    void SetPoisition (const Vector3D & pos) { position_ = pos; }
    const Vector3D & GetPosition () const { return position_; }

    void SetMomentum (const Vector3D & p);

    const LorentzVector & GetFourMomentum () const { return p_; }

    Vector3D GetMomentum() const;
    double GetEnergy() const;


    virtual void Decay () = 0;

protected:
    std::string type_;
    double mass_;
    double charge_;
    double spin_;
    double mean_life_;

    double t_;
    Vector3D position_;
    LorentzVector p_;// 4-momentum
};

void DoDecay (Particle & particle);
#endif //PARTICLE_H_
