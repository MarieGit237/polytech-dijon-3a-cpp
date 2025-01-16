#include <iostream>
#include <string>
#include <vector>
#include "point.h"

class Forme {
    public:
        Forme();
        virtual void demander(Point p)=0;
        virtual void afficher(Point point, int dim)=0;
        bool estValide();
    private:
        std::vector<Point> _sommets;

};