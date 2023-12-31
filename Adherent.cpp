#include "Adherent.h"
#include <iostream>
using namespace std;

// Constructeur par défaut
Adherent::Adherent() {
    nom = "";
    prenom = "";
    adresse = "";
    numeroAdherent = 0;
    capaciteMaxLivresEmpruntes = 10; 
    livresEmpruntes = new Livre*[capaciteMaxLivresEmpruntes];
    nombreLivresEmpruntes = 0;
}

// Constructeur prenant les attributs spécifiques
Adherent::Adherent(string nom, string prenom, string adresse) {
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    numeroAdherent = 0; 
    capaciteMaxLivresEmpruntes = 10; 
    livresEmpruntes = new Livre*[capaciteMaxLivresEmpruntes];
    nombreLivresEmpruntes = 0;
}

// Destructeur
Adherent::~Adherent() {
    delete[] livresEmpruntes; 
    
}

// Getters et setters
string Adherent::getNom(){
    return nom;
}

void Adherent::setNom(string nom) {
    this->nom = nom;
}

string Adherent::getPrenom() {
    return prenom;
}

void Adherent::setPrenom(string prenom) {
    this->prenom = prenom;
}

string Adherent::getAdresse()  {
    return adresse;
}

void Adherent::setAdresse(string adresse) {
    this->adresse = adresse;
}

// Méthodes supplémentaires pour gérer les opérations de l'adhérent, comme emprunter et rendre des livres
void Adherent::emprunterLivre(Livre* livre) {
    if (nombreLivresEmpruntes < capaciteMaxLivresEmpruntes) {
        livresEmpruntes[nombreLivresEmpruntes] = livre;
        nombreLivresEmpruntes++;
    } else {
        // Gérer le dépassement de la capacité maximale des livres empruntés
    }
}
