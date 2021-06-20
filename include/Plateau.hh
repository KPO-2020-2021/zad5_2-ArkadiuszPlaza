#ifndef Plateau_HH
#define Plateau_HH

#include "Solid.hh"

class Plateau : public Solid
{

public:

Plateau(Vector3d srodek=Vector3d(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/Plateau.dat");
Plateau( Plateau& pr );
  Plateau &operator=(const Plateau &other)
    {
     wymiary=other.wymiary;
 wierz=other.wierz;
  srodek=other.srodek;
  nazwa=other.nazwa;
        return *this;
    }
};







#endif 