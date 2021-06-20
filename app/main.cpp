#include "Scene.hh"

using namespace std;

int main()
{
     srand(time(NULL));
     Vector3d wek;
   Scene s;
   wek.informacje();
       while (s.interfejs())
       {
            s.rysuj();
            wek.informacje();
       }
}
