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
    Livre **livresEmpruntes;   // Tableau de pointeurs de Livre
    int nombreLivresEmpruntes; // Nombre de livres empruntés
    int capaciteMaxLivresEmpruntes;

public: 

    Adherent();
    Adherent(string,string,string);
    ~Adherent();
        
    //getters && setters
    string getNom();
    void setNom(string);
    string getPrenom();
    void setPrenom(string );
    string getAdresse();
    void setAdresse(string );
    int getNumeroAdherent();
    void setNumeroAdherent(int);
    Bibliotheque getBibliothequeInscrite();
    void setBibliothequeInscrite(Bibliotheque bibliothequeInscrite);
    int getCapaciteMaxLivresEmpruntes();
    void setCapaciteMaxLivresEmpruntes(int capaciteMaxLivresEmpruntes);

    //Methodes 
    void emprunterLivre(Livre*);
    void rendreLivre(string);

    //Fct amie
    friend void afficherInfosAdherent(const Adherent& adherent);

    //Operateur
    bool operator%(string);
    

};

#endif // __ADHERANT_H__
