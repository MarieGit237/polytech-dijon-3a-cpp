#include<iostream>
#include<string>
#include "forme.h"

class Droite : public Forme{
    public:
        Droite(Point premier, Point second);
        void demander();
        void afficher(Point point);
    private:
        Point _premier;
        Point _second;
};
