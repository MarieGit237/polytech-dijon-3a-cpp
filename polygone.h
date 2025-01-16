#include<iostream>
#include <vector>
#include "point.h"
#include "forme.h"


class Polygone: public Forme {
    public:
        Polygone(std::vector<Point> points);
        void demander();
        void afficher(Point point);

    private:
        std::vector<Point> _points;
};