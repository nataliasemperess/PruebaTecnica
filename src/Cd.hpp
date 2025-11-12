#ifndef CD_HPP
#define CD_HPP

#include "interfaces.hpp"
#include <string>

class Cd : public Rotatorio, public Almacenamiento {

private:

    std::string nombre_;
    double capacidadMB_ = 0.0;
    std::string contenido_; // datos almacenados en el Cd
    std::string tipo_ = "CD"; // tipo de disco
    int rpm_ = 400; // velocidad de giro

public:

    // Constructor : para inicializar el cd
    Cd(std::string nombre, double capacidadMB, int rpm = 400);

    // Getters y setters
    const std::string& nombre() const;    // nombre del CD
    void setNombre(const std::string& n); // para cambiar el nombre

    double capacidadMB() const;           // capacidad
    void setCapacidadMB(double mb);       // para modificar la capacidad

    int rpm() const;                      // revoluciones por minuto
    void setRpm(int r);                   // para modificarlas

    // Métodos heredados de las interfaces

    std::string girarDisco() override; // Del Rotatorio : simula el giro del CD

    std::string escribirDatos(const std::string& datos) override; // Del Almacenamiento : simula la escritura de datos en el CD

    std::string leerDatos() const override; // Del Almacenamiento : simula la lectura de datos

    std::string reportarInformacion() const override; // Del Almacenamiento : devuelve un resumen del estado del CD
};

#endif
