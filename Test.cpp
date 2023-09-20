// Test.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <string>

class User
{
public:
    User();
    User(std::string nom, int age);
    ~User();

private:
    std::string nom;
    int age;
};

User::User() {
    nom = "inconu";
    age = -1;
}

User::User(std::string nom, int age) {
    this->nom = nom;
    this->age = age;
}

User::~User()
{
}

void affiche_menu();
int menu_selection();
bool quit_menu();
bool appel_fonction(int option);
void affiche_hello_world();
void ajoute_user();
void add_user();

int main()
{
    bool test = true;
    while (test){
        int option;
        affiche_menu();
        option = menu_selection();
        test = appel_fonction(option);
        std::cout << new_user;

    }

    return 0;
}


void affiche_menu() {
    std::cout << "Selectionnez une des options ci-dessous : \n";
    std::cout << "Entrez 1 pour afficher Hello World ! \n";
    std::cout << "Entrez 2 pour creer un utilisateur ! \n";
    std::cout << "Entrez 3 pour afficher les utilisateurs ! \n";
    std::cout << "Entrez 4 pour quitter le menu ! \n";
}



int menu_selection() {
    int user_int;
    do {
        std::cin >> user_int;
    } while (user_int < 1 || user_int > 4);
    return user_int;
}


bool appel_fonction(int option) {
    if (option == 1) {
        affiche_hello_world();
    }
    else if (option == 2) {
        ajoute_user();
    }
    else if (option == 3) {

    }
    else if (option == 4) {
        return quit_menu();
    }
    return true;
}

void affiche_hello_world() {
    std::cout << "Hello world ! \n";
}

void ajoute_user() {
    User new_user;
    std::string input_user;
    int usr_age;
    std::cout << "Entrer le nom de l'utilisateur a ajouter : ";
    std::cin.ignore(); //vide le tampon d'entré (souvent '/n' reste stocké dedans)
    std::getline(std::cin, input_user);
    std::cout << "Entrer l'age de l'utilisateur a ajouter : ";
    std::cin.ignore(); //vide le tampon d'entré (souvent '/n' reste stocké dedans)
    std::cin >> usr_age;
    User input_user(input_user, usr_age);
    std::cout << "l'utilisateur " << input_user.nom << "a bien été ajouté " << std::endl;
}


bool quit_menu() {
    return false;
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
