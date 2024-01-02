<<<<<<< HEAD
#ifndef __ADHERANT_H__
#define __ADHERANT_H__

#include <iostream>
using namespace std;
#include "Livre.h"
#include "Bibliotheque.h"
#include "Personne.h"

class Adherent : public Personne  {
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
=======
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
    

};
>>>>>>> 1256a6fe95eb15d31e76b688012d6108367311a8
#endif // __ADHERANT_H__