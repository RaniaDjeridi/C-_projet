#ifndef __ADHERANT_H__
#define __ADHERANT_H__

#include <iostream>
using namespace std;
#include "Livre.h"
#include "Bibliotheque.h"

class Adherent {
    private:
        string nom;
        string prenom;
        string adresse;
        int numeroAdherent;
        Bibliotheque bibliothequeInscrite;
        Livre** livresEmpruntes; // Tableau de pointeurs de Livre
        int nombreLivresEmpruntes; // Nombre de livres empruntés
        int capaciteMaxLivresEmpruntes;

    public:
        Adherent();
        Adherent(string,string,string);
        ~Adherent();
        

};
#endif // __ADHERANT_H__