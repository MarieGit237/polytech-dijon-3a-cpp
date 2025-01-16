#include "droite.h"

Droite::Droite(Point premier, Point second)
: Forme(), _premier(premier),_second(second) {}

void Droite::demander(){
    std::cout<<" entrer la premiere coordonnee"<<std::endl;
    std::cin>> _premier._x;
    std::cout<<" entrer la premiere coordonnee"<<std::endl;
    std::cin>> _premier._y;
    std::cout<<" entrer la seconde coordonnee"<<std::endl;
    std::cin>> _second._x;
    std::cout<<" entrer la seconde coordonnee"<<std::endl;
    std::cin>> _second._y;

}

void afficher(Point point){
    std::cout<<" la droite entre deux points"<<std::endl;
}

