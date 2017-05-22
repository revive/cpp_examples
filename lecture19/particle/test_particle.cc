#include "photon.h"
#include "electron.h"

#include <iostream>
#include <memory>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;

int main ()
{
    vector<shared_ptr<Particle>> particle_vec;
    // create 10 particles
    for (int i=0; i<10; ++i) {
        if (i%2 == 0)
            particle_vec.emplace_back(new Photon);
        else
            particle_vec.push_back(std::make_shared<Electron>());
    }
    for (auto & p: particle_vec) {
        p->Decay();
    }
}
