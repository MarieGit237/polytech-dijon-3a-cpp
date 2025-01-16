#include <iostream>
#include <string>

class Canvas{
    private:
        double _largeur;
        double _longueur;
    public:
        Canvas(double largeur, double longueur);
         enum formes{
            droite,
            cercle,
            polygone
        };
        friend std::ostream& operator << (std::ostream& os, const Canvas canvas);
        enum fond{
           rouge,
           bleu,
           jaune, 
           blanc 
        };
};