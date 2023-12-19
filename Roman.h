#ifndef __ROMAN_H__
#define __ROMAN_H__

#include <iostream>
using namespace std;
#include "Livre.h"

class Roman : public Livre {
    private:
        string genre;

    public:
        Roman(string,string,string,string);
        Roman(Livre,string); // Constrcteur de recopie

        //getter

        string getGenre();

        //setter

        void setGenre(string);
    

};
#endif // __ROMAN_H__