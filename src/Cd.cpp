#include "Cd.hpp"
#include <sstream> // para las cadenas
#include <utility>


// Constructor

Cd::Cd(std::string nombre, double capacidadMB, int rpm) :
    nombre_(std::move(nombre)), capacidadMB_(capacidadMB),
    contenido_(), tipo_("CD"), rpm_(rpm){}


// Getters y setters

const std::string& Cd::nombre() const{
    return nombre_;
}

void Cd::setNombre(const std::string& n){
    nombre_ = n;
}

double Cd::capacidadMB() const{
    return capacidadMB_;
}

void Cd::setCapacidadMB(double mb){
    capacidadMB_ = mb;
}

int Cd::rpm() const{
    return rpm_;
}

void Cd::setRpm(int r){
    rpm_ = r;
}

// Métodos heredados de las interfaces

std::string Cd::girarDisco(){

    std::ostringstream os;
    os << "CD girando a " << rpm_ << " rpm.";
    return os.str();

}

std::string Cd::escribirDatos(const std::string& datos){

    contenido_ = datos;
    return "Escritura en CD mediante láser completada.";
}

std::string Cd::leerDatos() const {

    if (contenido_.empty()) {
        return "CD vacío.";
    }
    else {
        return "Datos del CD: " + contenido_;
    }
}

std::string Cd::reportarInformacion() const{

    std::ostringstream os;
    os << "Tipo: " << tipo_ << " | Nombre: " << nombre_ << " | Capacidad: " << capacidadMB_ << " MB" << " | Contenido: " << (contenido_.empty() ? "(vacío)" : contenido_);

     return os.str();

}
