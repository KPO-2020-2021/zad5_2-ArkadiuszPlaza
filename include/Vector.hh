#ifndef Vector_HH
#define Vector_HH

#include <iostream>
#include <cmath>
using namespace std;

template <int Wymiar>
class Vector
{
    static int wszystkie;
    static int aktualne;
    double _wsp[Wymiar];

public:
    Vector();
    Vector(Vector<Wymiar> &wek)
    {
        for (int i = 0; i < Wymiar; i++)
            _wsp[i] = wek._wsp[i];

        aktualne++;
    }
    constexpr Vector(const Vector &other)
    {
        for (int i = 0; i < Wymiar; i++)
            _wsp[i] = other._wsp[i];
        aktualne++;
    }
    Vector &operator=(const Vector &other)
    {
        for (int i = 0; i < Wymiar; i++)
            _wsp[i] = other._wsp[i];
        return *this;
    }

    Vector &operator=(const float &other)
    {
        for (int i = 0; i < Wymiar; i++)
            _wsp[i] = other;
        return *this;
    }
    ~Vector();
    Vector(double _wsp[Wymiar]);
    double operator[](int index) const;
    double &operator[](int index);
    Vector<Wymiar> operator+(Vector<Wymiar> &arg);
    Vector<Wymiar> operator-(Vector<Wymiar> &arg);
    void informacje();
};

template <int Wymiar>
int Vector<Wymiar>::wszystkie = 0;

template <int Wymiar>
int Vector<Wymiar>::aktualne = 0;

template <int Wymiar>
void Vector<Wymiar>::informacje()
{
    cout << "akturalne obiekty: " << aktualne << endl;
    cout << "wszystkie obiekty: " << wszystkie << endl;
}

template <int Wymiar>
Vector<Wymiar>::Vector()
{
    for (int i = 0; i < Wymiar; i++)
        _wsp[i] = 0;
    aktualne++;
    wszystkie++;
}

template <int Wymiar>
Vector<Wymiar>::Vector(double _wsp[Wymiar])
{
    for (int i = 0; i < Wymiar; i++)
        this->_wsp[i] = _wsp[i];
    aktualne++;
    wszystkie++;
}

template <int Wymiar>
Vector<Wymiar>::~Vector()
{
    aktualne--;
}

template <int Wymiar>
double Vector<Wymiar>::operator[](int index) const
{
    if (index > Wymiar || index < 0)
    {
        std::cerr << "Indeks poza skala" << std::endl;
        exit(1);
    }
    return _wsp[index];
}

template <int Wymiar>
double &Vector<Wymiar>::operator[](int index)
{
    if (index > Wymiar || index < 0)
    {
        std::cerr << "Indeks poza skala" << std::endl;
        exit(1);
    }
    return _wsp[index];
}

template <int Wymiar>
Vector<Wymiar> Vector<Wymiar>::operator+(Vector<Wymiar> &arg)
{
    Vector<Wymiar> Wynik;
    for (int i = 0; i < Wymiar; i++)
    {
        Wynik[i] = _wsp[i] + arg[i];
    }
    return Wynik;
}

template <int Wymiar>
Vector<Wymiar> Vector<Wymiar>::operator-(Vector<Wymiar> &arg)
{
    Vector<Wymiar> Wynik;
    for (int i = 0; i < Wymiar; i++)
    {
        Wynik[i] = _wsp[i] - arg[i];
    }
    return Wynik;
}

template <int Wymiar>
std::istream &operator>>(std::istream &Strm, Vector<Wymiar> &Wek)
{
    for (int i = 0; i < Wymiar; i++)
    {
        Strm >> Wek[i];
    }
    return Strm;
    return Strm;
}

template <int Wymiar>
inline std::ostream &operator<<(std::ostream &Strm, const Vector<Wymiar> &Wek)
{
    for (int i = 0; i < Wymiar; i++)
    {
        Strm << Wek[i] << " ";
    }
    return Strm;
}

#endif
