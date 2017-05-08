#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "Vector3D.h"

#include <string>

// this class defines a particle in classical mechanics
class Particle {

public:
    using NameType = std::string;

//    Particle () = default;

    explicit Particle (const NameType &name = "m0")
        : Particle{{0, 0, 0}, {1, 0, 0}, 1, name} {}

    Particle () : Particle{{0, 0, 0}, {1, 0, 0}, 1, "m0"} {}

    Particle (const Vector3D &p, const Vector3D &v, double m, const NameType & name);

    Particle (const Particle &o);

    const Vector3D &GetPosition () const { return pos_; }

    const Vector3D &GetVelocity () const { return v_; }

    double GetMass () const { return m_; }

    const std::string &GetName () const { return name_; };

    void SetPosition (const Vector3D &p) { pos_ = p; }

    void SetVelocity (const Vector3D &v) { v_ = v; }

    void SetMass (double m) { m_ = m; }

    void SetName (const NameType & name) { name_ = name; };

    Vector3D GetMomentum () const;

    double GetEnergy () const;

    Particle & Move(double dt);

    Particle & Rotate(double angle);

    const Particle & Rotate (double angle) const;

    static unsigned int GetCount ();
    
private:
    // the position of the particle
    Vector3D pos_{0, 0, 0};

    // the velocity of the particle
    Vector3D v_{0, 0, 0};

    // the mass of the particle
    double m_ = 1;

    // the name of the particle
    NameType name_ = "m0";

    // count of particles, static
    static unsigned int count_;

// declaration of friend functions
    friend std::istream & read (std::istream &s, Particle &p);
};

std::istream & read (std::istream &s, Particle &p);

#endif // PARTICLE_H_
