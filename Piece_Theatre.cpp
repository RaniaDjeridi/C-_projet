#include "Piece_Theatre.h"


#include <iostream>
using namespace std;

Piece_Theatre::Piece_Theatre(string titre, string code,string ISBN, string siecle)
    : Livre(titre, code, ISBN), siecle(siecle) {}


Piece_Theatre::Piece_Theatre(Livre livre, string siecle)
    : Livre(livre), siecle(siecle) {}


// Getter pour le siècle
string Piece_Theatre::getSiecle() {
    return siecle;
}

// Setter pour le siècle
void Piece_Theatre::setSiecle(string nouveauSiecle) {
    siecle = nouveauSiecle;
}