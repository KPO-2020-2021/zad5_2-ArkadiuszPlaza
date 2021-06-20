#ifndef Prism_HH
#define Prism_HH

#include "Solid.hh"

class Prism : public Solid
{
    public:
    Prism(Vector3d srodek=Vector3d(),double z=10,double promien=15,std::string nazwa = "../datasets/garniastoslup6.dat" );
   
};




#endif
