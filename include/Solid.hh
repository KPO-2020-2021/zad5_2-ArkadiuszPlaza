#ifndef Solid_HH
#define Solid_HH

#include "Vector3d.hh"
#include "Matrix3x3.hh"
#include <fstream>
#include <vector>
#include <memory>

class Solid
{
 protected:
  std::shared_ptr<Vector3d> wymiary;
 std::vector<Vector3d> wierz;
 Vector3d srodek;
 std::string nazwa;
 public:

  Vector3d &operator[](int index);
  Vector3d operator[](int index)const;

 void set_srodek(Vector3d srodek);
 void set_nazwa(std::string nazwa);
 Vector3d get_srodek() const;
 std::string get_nazwa() const;

 void przesun(Vector3d przes);
 void translacja(Matrix3x3 obr);

 void zapisz();

};





#endif
