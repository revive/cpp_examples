#include "particle.h"

#include <cmath>

using std::sqrt;

Particle::Particle (const std::string & type)
    : type_(type) {}

void Particle::SetMomentum (const Vector3D &p)
{
    double e = sqrt(p.Magnitude() * p.Magnitude() + mass_ * mass_);
    p_ = {e, p.x_, p.y_, p.z_};
}

Vector3D Particle::GetMomentum() const
{
    return {p_.x1_, p_.x2_, p_.x3_};
}

double Particle::GetEnergy() const
{
    return p_.x0_;
}

void DoDecay (Particle & particle)
{
    particle.Decay();
}
