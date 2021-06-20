#include "Prism.hh"

Prism::Prism(Vector3d srodek, double z, double promien , std::string nazwa )
{
    double tab[] = {0, 0, z};
   wymiary=std::make_shared<Vector3d> (tab);
    this->nazwa = nazwa;
    this->srodek = srodek;
    Vector3d punkt;
    for (int i = 0; i < 360; i += 60)
    {
        punkt[0] = promien * cos(i * M_PI / 180);
        punkt[1] = promien * sin(i * M_PI / 180);
        punkt[2] = srodek[2] + (z / 2);
        wierz.push_back(punkt);
        punkt[0] = promien * cos(i * M_PI / 180);
        punkt[1] = promien * sin(i * M_PI / 180);
        punkt[2] = srodek[2] - (z / 2);
        wierz.push_back(punkt);
    }
}