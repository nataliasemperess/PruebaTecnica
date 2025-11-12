#include "DiscoDuro.hpp"
#include <sstream> // para las cadenas
#include <utility> // para std::move


// Constructor

DiscoDuro::DiscoDuro(std::string nombre, double capacidadGB, int rpm, std::string conexion) :
    nombre_(std::move(nombre)), capacidadGB_(capacidadGB),
    contenido_(), tipo_("HDD"), rpm_(rpm), conexion_(std::move(conexion)){}


// Getters y setters

const std::string& DiscoDuro::nombre() const{
    return nombre_;
}

void DiscoDuro::setNombre(const std::string& n){
    nombre_ = n;
}

double DiscoDuro::capacidadGB() const{
    return capacidadGB_;
}

void DiscoDuro::setCapacidadGB(double gb){
    capacidadGB_ = gb;
}

int DiscoDuro::rpm() const{
    return rpm_;
}

void DiscoDuro::setRpm(int r){
    rpm_ = r;
}

const std::string& DiscoDuro::conexion() const {
    return conexion_;
}

void DiscoDuro::setConexion(const std::string& c) {
    conexion_ = c;
}

// Métodos heredados de las interfaces

std::string DiscoDuro::girarDisco(){

    std::ostringstream os;
    os << "Disco duro girando a " << rpm_ << " rpm.";
    return os.str();

}

std::string DiscoDuro::escribirDatos(const std::string& datos){

    contenido_ = datos;
    return "Escritura en el HDD mediante cabezal magnético completada.";
}

std::string DiscoDuro::leerDatos() const {

    if (contenido_.empty()) {
        return "Disco duro vacío.";
    }
    else {
        return "Datos del HDD: " + contenido_;
    }
}

std::string DiscoDuro::reportarInformacion() const{

    std::ostringstream os;
    os << "Tipo: " << tipo_ << " | Nombre: " << nombre_ << " | Capacidad: " << capacidadGB_ << " GB" << " | Contenido: " << (contenido_.empty() ? "(vacío)" : contenido_);

     return os.str();

}
