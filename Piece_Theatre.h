#ifndef __PIECE_THEATRE_H__
#define __PIECE_THEATRE_H__



#include <iostream>
using namespace std;
#include "Livre.h"

class Piece_Theatre : public Livre {
    private:
        string siecle;

    public:
        Piece_Theatre(string,string,string,string);
        Piece_Theatre(Livre,string); // Constrcteur de recopie

        //getter

        string getSiecle();

        //setter

        void setSiecle(string);
    

};

#endif // __PIECE_THEATRE_H__