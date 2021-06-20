#ifndef Cuboid_HH
#define Cuboid_HH

#include "Solid.hh"

class Cuboid : public Solid
{

public:

Cuboid(Vector3d srodek=Vector3d(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/Cuboid.dat");
Cuboid( Cuboid& pr );
   Cuboid &operator=(const Cuboid &other)
    {
     wymiary=other.wymiary;
 wierz=other.wierz;
  srodek=other.srodek;
  nazwa=other.nazwa;
        return *this;
    }
};







#endif 