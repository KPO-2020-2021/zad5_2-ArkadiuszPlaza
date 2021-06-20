#ifndef Mount_HH
#define Mount_HH

#include "Solid.hh"

class Mount : public Solid
{

public:

Mount(Vector3d srodek=Vector3d(), double x=50,double y=50, double z=50,std::string nazwa="../datasets/Mount.dat");
Mount( Mount& pr );
 Mount &operator=(const Mount &other)
    {
     wymiary=other.wymiary;
 wierz=other.wierz;
  srodek=other.srodek;
  nazwa=other.nazwa;
        return *this;
    }
};







#endif 