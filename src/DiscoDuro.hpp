#ifndef DISCODURO_HPP
#define DISCODURO_HPP

#include "interfaces.hpp"
#include <string>

class DiscoDuro : public Rotatorio, public Almacenamiento {

private:

    std::string nombre_;
    double capacidadGB_ = 0.0;
    std::string contenido_; // datos almacenados en el disco duro
    std::string tipo_ = "HDD"; // tipo de disco
    int rpm_ = 7200; // velocidad de giro
    std::string  conexion_ = "USB"; // tipo de conexión

public:

    // Constructor : para inicializar el disco duro
    DiscoDuro(std::string nombre, double capacidadGB, int rpm = 7200, std::string conexion = "USB");

    // Getters y setters
    const std::string& nombre() const;    // nombre del disco duro
    void setNombre(const std::string& n); // para cambiar el nombre

    double capacidadGB() const;           // capacidad
    void setCapacidadGB(double gb);       // para modificar la capacidad

    int rpm() const;                      // revoluciones por minuto
    void setRpm(int r);                   // para modificarlas

    const std::string& conexion() const; // tipo de conexión
    void setConexion(const std::string& c); // para cambiar el tipo

    // Métodos heredados de las interfaces

    std::string girarDisco() override; // Del Rotatorio : simula el giro

    std::string escribirDatos(const std::string& datos) override; // Del Almacenamiento : simula la escritura de datos

    std::string leerDatos() const override; // Del Almacenamiento : simula la lectura de datos

    std::string reportarInformacion() const override; // Del Almacenamiento : devuelve un resumen del estado del disco duro
};

#endif
