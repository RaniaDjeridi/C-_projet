#include "Bibliotheque.h"
#include <iostream>
#include <list>
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

void Bibliotheque::ajouterLivre(Livre* nouveauLivre) {
    if (nombreLivres < capaciteMax) {
        listeLivres[nombreLivres] = nouveauLivre;
        nombreLivres++;
        cout << "Livre ajouté avec succès." << endl;
    } else {
        cout << "Capacité maximale atteinte, impossible d'ajouter un nouveau livre." << endl;
    }
}

void Bibliotheque::supprimerLivre(string codeLivre) {
    for (int i = 0; i < nombreLivres; ++i) {
        if ((*listeLivres[i]).getCode()== codeLivre) {
            delete listeLivres[i]; // Supprime l'objet Livre
            for (int j = i; j < nombreLivres - 1; ++j) {
                listeLivres[j] = listeLivres[j + 1];
            }
            nombreLivres--;
            cout << "Livre supprimé avec succès." <<endl;
            return;
        }
    }
    cout << "Livre non trouvé dans la bibliothèque." << endl;
}

void Bibliotheque::afficherLivres() {
    if (nombreLivres == 0) {
        cout << "La bibliothèque ne contient aucun livre pour le moment." << endl;
    } else {
        cout << "Livres dans la bibliothèque:" <<endl;
        for (int i = 0; i < nombreLivres; ++i) {
            cout << "Code: " << (*listeLivres[i]).getCode() << ", Titre: " << (*listeLivres[i]).getTitre() << ", Etat: " << (*listeLivres[i]).getEtat() <<endl;
        }
    }
}


void Bibliotheque::acheterLivre(Livre& nouveauLivre) {
    if (nombreLivres < capaciteMax) {
        listeLivres[nombreLivres] = &nouveauLivre;
        nouveauLivre.setbibliotheque_origine(this); 
        nombreLivres++;
        cout << "Livre acheté et ajouté à la bibliothèque avec succès." << endl;
    } else {
        cout << "Capacité maximale atteinte, impossible d'acheter un nouveau livre." << endl;
    }
}

void Bibliotheque::demanderLivreAutreBib(string isbn, Bibliotheque& autreBibliotheque) {
    for (int i = 0; i < autreBibliotheque.nombreLivres; ++i) {
      if ((*autreBibliotheque.listeLivres[i]).getISBN() == isbn){
            Livre* livreEmprunte = autreBibliotheque.listeLivres[i];
            
            if (livreEmprunte->getEtat() == "Disponible") {
                ajouterLivre(livreEmprunte);
                autreBibliotheque.supprimerLivre(livreEmprunte->getISBN()); 
                cout << "Livre emprunté avec succès depuis l'autre bibliothèque." <<endl;
                return;
            } else {
                cout << "Le livre demandé n'est pas disponible dans l'autre bibliothèque." << endl;
                return;
            }
        }
    }
    cout << "Le livre demandé n'est pas disponible dans l'autre bibliothèque." << endl;
}

void Bibliotheque::RendreLivre(Livre& livreARendre) {
    list <Livre> LivreEmpruntes ;
    if (livreARendre.getEtat() =="Emprunté") {
        livreARendre.getbibliotheque_origine()->supprimerLivre(livreARendre.getISBN());
        cout << "Le livre a été rendu avec succès." << endl;
    } else {
        cout << "Ce livre n'est pas actuellement emprunté." << endl;
    }
}

