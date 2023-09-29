#include <iostream>
#include <vector>

using namespace std;

// Interfaz para las opciones del menú
class MenuOption {
public:
    virtual void execute() = 0;
};

// Clase concretas 
class Option1 : public MenuOption {
public:
    void execute() override {
        cout << "Realizando la acción de la Opcion 1." << endl;
    }
};


class Option2 : public MenuOption {
public:
    void execute() override {
        cout << "Realizando la acción de la Opcion 2." << endl;
    }
};


class Option3 : public MenuOption {
public:
    void execute() override {
        cout << "Realizando la accion de la Opcion 3." << endl;
    }
};

int main() {
    int opcion;
    
    // Crea las instancias de las opciones
    Option1 option1;
    Option2 option2;
    Option3 option3;

    // Vector de opciones 
    vector<MenuOption*> opciones = {&option1, &option2, &option3};

    do {
        cout << "Menu:" << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= opciones.size()) {
            
            opciones[opcion - 1]->execute();
        } else if (opcion != 4) {
            cout << "Opcion no válida. Por favor, elija una opcion valida ." << endl;
        }

    } while (opcion != 4);

    return 0;
}
