#ifndef Surface_HH
#define Surface_HH

#include "Vector3d.hh"
#include "Matrix3x3.hh"
#include <fstream>
#include <vector>

class Surface
{
protected:
    std::vector<Vector3d> wierz;
    std::string nazwa;
   int licz_prostych;
public:
    Surface(Vector3d wymiary=Vector3d(),int gestosc_siatki=10, std::string nazwa="../datasets/Surface");

    Vector3d &operator[](int index);
    Vector3d operator[](int index) const;

    void set_nazwa(std::string nazwa);
    std::string get_nazwa() const;

    void zapisz();
};

#endif