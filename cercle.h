#include <iostream>
#include <string>
#include "forme.h"
#include "point.h"

class Cercle : public Forme {
    public:
         Cercle(Point point, double rayon);
         void demander();
         void afficher();
        double air();
    private:
        Point _point;
        double _rayon;

};