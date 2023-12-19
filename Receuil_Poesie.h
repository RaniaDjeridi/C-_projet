#ifndef __RECEUIL_POESIE_H__
#define __RECEUIL_POESIE_H__

#include <iostream>
using namespace std;
#include "Livre.h"

class Receuil_Poesie : public Livre {
    private:
        string inducateurVersProse;

    public:

        Receuil_Poesie(string,string,string,string);
        Receuil_Poesie(Livre,string); // Constrcteur de recopie

        //getter

        string getinducateurVersProse();

        //setter

        void setinducateurVersProse(string);
    
};


#endif // __RECEUIL_POESIE_H__