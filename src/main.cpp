#include <iostream>
#include "Cd.hpp"
#include "DiscoDuro.hpp"

int main() {

    Cd cd("Prueba1CD", 800.0, 500);
    DiscoDuro hdd("Prueba2HDD", 1024.0, 7200);

    std::cout << cd.girarDisco() << "\n";
    std::cout << cd.escribirDatos("Disco 1 de música") << "\n";
    std::cout << cd.leerDatos() << "\n";
    std::cout << cd.reportarInformacion() << "\n\n";

    std::cout << hdd.girarDisco() << "\n";
    std::cout << hdd.escribirDatos("Documentos importantes del HDD") << "\n";
    std::cout << hdd.leerDatos() << "\n";
    std::cout << hdd.reportarInformacion() << "\n";

    return 0;
}
