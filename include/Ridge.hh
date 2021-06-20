#ifndef Ridge_HH
#define Ridge_HH

#include "Solid.hh"

class Ridge : public Solid
{

public:

Ridge(Vector3d srodek=Vector3d(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/Ridge.dat");
Ridge( Ridge& pr );
 Ridge &operator=(const Ridge &other)
    {
     wymiary=other.wymiary;
 wierz=other.wierz;
  srodek=other.srodek;
  nazwa=other.nazwa;
        return *this;
    }
};







#endif 