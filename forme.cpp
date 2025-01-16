#include "forme.h"

Forme::Forme(){}

void Forme::demander(Point p){
    std::cout<<"Entrer les paramètres pour la forme"<<std::endl;
}

void Forme::afficher(Point p, int dim){
    std::cout<<"Cette forme est constituée d'un: "<< p._x <<"et"<< p._y << "de dimension: "<< dim << std::endl;
    
}