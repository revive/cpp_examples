#include "Particle.h"

#include <iostream>
using std::cerr;
using std::endl;

unsigned int Particle::count_ = 0;

Particle::Particle (const Vector3D &p, const Vector3D &v, double m, const NameType & name)
    : pos_{p}, v_{v}, m_{m}, name_{name} {
    ++count_;
}

Particle::Particle (const Particle &o)
    : pos_{o.pos_}, v_{o.v_}, m_{o.m_}, name_{o.name_} {
    ++count_;
}

Vector3D Particle::GetMomentum () const
{
    return v_ * m_;
}

double Particle::GetEnergy () const
{
    return 0.5 * m_ * v_.Magnitude() * v_.Magnitude();
}

Particle & Particle::Move (double dt)
{
    pos_ += v_ * dt;
    return * this;
}

Particle & Particle::Rotate(double angle)
{
    cerr << "particle " << name_ << " rotates " << angle
         << " (non-const version)" << endl;
    return *this;
}

const Particle & Particle::Rotate (double angle) const
{
    cerr << "particle " << name_ << " rotates " << angle
         << " (const version)" << endl;
    return *this;
}

unsigned int Particle::GetCount ()
{
    return count_;
}


std::istream & read (std::istream &s, Particle &p)
{
    read(s, p.pos_);
    read(s, p.v_);
    s >> p.m_;
    s >> p.name_;
    return s;
}
