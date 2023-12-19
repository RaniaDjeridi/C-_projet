#include "Bibliotheque.h"
#include <iostream>
using namespace std;

Bibliotheque::Bibliotheque() {
    nom = "";
    adresse = "";
    code = "";
    capaciteMax = 100; // Valeur arbitraire pour la capacité maximale
    nombreLivres = 0;
    listeLivres = new Livre*[capaciteMax]; // Allocation du tableau de pointeurs de Livre
}

// Constructeur prenant les attributs spécifiques
Bibliotheque::Bibliotheque(string nom, string adresse, string code)
    : nom(nom), adresse(adresse), code(code) {
    capaciteMax = 100; // Valeur arbitraire pour la capacité maximale
    nombreLivres = 0;
    listeLivres = new Livre*[capaciteMax]; // Allocation du tableau de pointeurs de Livre
}

// Getter pour le nom
string Bibliotheque::getNom() {
    return nom;
}

// Getter pour l'adresse
string Bibliotheque::getAdresse() {
    return adresse;
}

// Getter pour le code
string Bibliotheque::getCode() {
    return code;
}

// Getter pour les livres (retourne un tableau de pointeurs de Livre)
Livre** Bibliotheque::getLivres() {
    return listeLivres;
}

// Setter pour le nom
void Bibliotheque::setNom(string nouveauNom) {
    nom = nouveauNom;
}

// Setter pour l'adresse
void Bibliotheque::setAdresse(string nouvelleAdresse) {
    adresse = nouvelleAdresse;
}

// Setter pour le code
void Bibliotheque::setCode(string nouveauCode) {
    code = nouveauCode;
}

// Setter pour les livres
void Bibliotheque::setLivres(Livre** nouveauxLivres) {
    listeLivres = nouveauxLivres;
}