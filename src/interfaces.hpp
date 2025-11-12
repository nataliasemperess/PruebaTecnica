#ifndef INTERFACES_HPP
#define INTERFACES_HPP

#include <string>

// 1) Interfaz para objetos que giran

struct Rotatorio {
    virtual ~Rotatorio() = default;
    virtual std::string girarDisco() = 0;
};

// 2) Interfaz para los dispositivos que almacenan

struct Almacenamiento{
    virtual ~Almacenamiento() = default;
    virtual std::string escribirDatos(const std::string& datos) = 0;
    virtual std::string leerDatos() const = 0;
    virtual std::string reportarInformacion() const = 0;
};

#endif
