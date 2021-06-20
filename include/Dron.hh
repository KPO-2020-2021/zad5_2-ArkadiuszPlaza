#ifndef DRON_HH
#define DRON_HH

#include "Cuboid.hh"
#include "Prism.hh"
#include "lacze_do_gnuplota.hh"
#include <unistd.h> // biblioteka dla usleep
#define CZAS 20000

class Dron
{
    std::vector<Vector3d> droga_drona;
    PzG::LaczeDoGNUPlota &Lacze;
    Cuboid orginal;
    Cuboid kopia;
    Prism org_wir[4];
    Prism kopia_wir[4];
    Matrix3x3 obr;
    Vector3d droga;
    double kat;
    int id; 
public:

  void usun();
  
  int get_id(){return id; }
  Dron(int id,PzG::LaczeDoGNUPlota &Lacze,Vector3d pozycja);
  void unoszenie(double droga);
  void przesun(double droga);
  void obrot(double kat); // kat podajemy w stopniach
  void obrot_rotrow(); // kat podajemy w stopniach
  void zapisz();
  void sterowanie();
  void okresl_droge(double droga);
};

#endif
