#include "Particle.h"

#include <iostream>

using std::cout;
using std::endl;

int main ()
{
    Particle m0{Vector3D{0, 0, 0}, Vector3D{1, 0, 0}, 2, "m0"};

    // after 5 seconds.

    Vector3D new_pos = m0.Move(5).GetPosition();
    cout << "new position is ";
    print (cout, new_pos);
    cout << endl;

    m0.SetName("m1");
    const Particle m1{m0};
    m0.SetName("m0");
    m0.Rotate(45);
    m1.Rotate(45);

    Particle::NameType name = m1.GetName();
    cout << name << endl;

    // Particle m2 = std::string{"m2"};
    // cout << m2.GetName() << endl;

//    Particle m3 = "m3";
    std::string s{"m2"};
    Particle m2 = static_cast<Particle> (s);
    cout << m2.GetName() << endl;

    cout << "There are " << Particle::GetCount() << " particles." << endl;
}
