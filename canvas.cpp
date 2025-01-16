#include "canvas.h"

Canvas::Canvas(double largeur, double longueur): double _largeur(largeur), double _longueur(longueur){}
    std::ostream Canvas::operator << (std::ostream& os, const Canvas canvas ){
        os << "la couleur choisie est: "<< fond 
        return os;
    }