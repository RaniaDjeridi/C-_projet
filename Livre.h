#ifndef __LIVRE_H__
#define __LIVRE_H__

#include <iostream>
using namespace std;

class Livre {
    private:
        string code;
        string auteur;
        string titre;
        string editeur;
        string ISBN;
        string publicCible;
        string etat;

    public:
    Livre();
    Livre(string,string,string) ;//on le definit par le titre , le code et l'ISBN 
    
    //getters  
    string getCode() ;
    string getAuteur() ;
    string getTitre() ;
    string getEditeur() ;
    string getISBN() ;
    string getPublicCible() ;
    string getEtat() ;



    //setters
    void setAuteur(string );
    void setTitre(string);
    void setEditeur(string);
    void setISBN(string);
    void setPublicCible(string);
    void setEtat(string);



};
#endif // __LIVRE_H__