#ifndef __BIBLIOTHEQUE_H__
#define __BIBLIOTHEQUE_H__

#include <iostream>
using namespace std;
#include "Livre.h"

class Bibliotheque {
    private :
        string nom;
        string adresse;
        string code;
        Livre** listeLivres; //Liste des livres dans la bibliothèque
        int capaciteMax;  // Nombre maximale de livres dans la bibliothèque
        int nombreLivres; // Nombre de livre dans la bibliothèque

    public:
        Bibliotheque(); //Constructeur par defaut
        Bibliotheque(string,string,string) ;// Constructeur 

        //getters
        string getNom();
        string getAdresse();
        string getCode();
        Livre** getLivres();

        //setters
        void setNom(string);
        void setAdresse(string);
        void setCode(string);
        void setLivres(Livre**);

        //Methodes
        void afficherLivres() ;
        void ajouterLivre(Livre*);
        Livre** chercheLivreParCatg(string);
        void demanderLivreAutreBib(string , Bibliotheque&);
        void acheterLivre(Livre&);
        void supprimerLivre(string);
        void RendreLivre(Livre&);

};

#endif // __BIBLIOTHEQUE_H__