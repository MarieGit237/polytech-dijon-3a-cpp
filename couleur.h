#include <iostream>
#include <ostream>

class Couleur{
    public:
        Couleur(std::string couleur);
        void toHexa();
        void toSring();
        friend std::ostream& operator << (std::ostream& os, const Couleur& couleur);
    private:
        std::string _couleur;

};
