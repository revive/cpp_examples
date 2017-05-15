#include "photon.h"
#include "electron.h"

#include <iostream>

using std::cout;
using std::endl;

int main ()
{
    Photon photon;
    Electron electron;
    
    DoDecay(photon);
    DoDecay(electron);

    Particle * p = &photon;
    p = &electron;

    Particle & e = electron;

    Particle & e2 = e;

    cout << e2.GetCharge() << endl;
    e2.Decay();
}
