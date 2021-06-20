#ifndef Scene_HH
#define Scene_HH
#include <iostream>
#include <iomanip>
#include <memory>
#include <fstream>
#include <list>
#include "Plateau.hh"
#include "Ridge.hh"
#include "Mount.hh"
#include "Prism.hh"
#include "lacze_do_gnuplota.hh"
#include "Dron.hh"
#include "Surface.hh"

#define N 2

class Scene
{
    std::list<std::shared_ptr<Solid>> Lista_elementow;
    PzG::LaczeDoGNUPlota Lacze;
    std::list<std::shared_ptr<Dron>> Lista_Dronow; 
    int nr_elem;
    int nr_drona;
    Surface *dno;

public:
    Scene();
    void rysuj();
    bool interfejs();
    ~Scene();
};

#endif
