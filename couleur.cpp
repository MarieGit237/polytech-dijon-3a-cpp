#include "couleur.h"

Couleur::Couleur(std::string couleur):_couleur(couleur){}

friend std::ostream& operator << (std::ostream& os, const Couleur& couleur){
    os<< "la epresentation textuelle" << Couleur.toHexa() <<std::endl;
    return os;
}

void toHexa(Couleur couleur){
   std::cout<<"quelle couleur?"<<std::endl;
    std::cin>> couleur;
}