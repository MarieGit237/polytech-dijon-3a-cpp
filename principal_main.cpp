#include "point.h"
#include "droite.h"
#include "generateur.h"
#include "forme.h"
#include "canvas.h"
#include<string>

int maint(){
std::string choix;
std::cout<<"voulez vous tracer une nouevlle forme?"<<std::endl;
std::cin>> choix;
std::cout<<"generer une droite"<<std::endl;
Droite droite((5,5), (5,10));
std::cout<<"quel type de fichier souhaitez vous generer?"<<std::endl;


return 0;
}