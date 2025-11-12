#include <iostream>
#include "Cd.hpp"

int main() {

    Cd cd("Prueba1CD", 800.0, 500);

    std::cout << cd.girarDisco() << "\n";
    std::cout << cd.escribirDatos("Disco 1 de música") << "\n";
    std::cout << cd.leerDatos() << "\n";
    std::cout << cd.reportarInformacion() << "\n";

    return 0;
}
