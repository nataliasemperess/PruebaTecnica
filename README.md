# Prueba Técnica - Natalia Sempere Sánchez

Antes de empezar a programar, se ha analizado qué comportamientos (métodos) y propiedades (atributos) comparten los objetos "Cd" y "DiscoDuro".  
El objetivo es decidir qué métodos deben ir en las interfaces y cuáles serán específicos de cada clase.

## Clasificación inicial

**Comportamientos comunes (en las interfaces)**
- "girarDisco()" : Ambos giran, pero giran a diferentes velocidades (láser o cabezal magnético)
- "escribirDatos()" : Ambos almacenan información, pero mediante métodos distintos.
- "leerDatos()" : Ambos pueden leer la información almacenada.
- "reportarInformacion()" : Devuelve un resumen con nombre, capacidad, tipo y contenido.

**Atributos comunes (en las clases)**
- "nombre" : identificador del disco.
- "capacidad" : espacio de almacenamiento (MB o GB)
- "contenido" : texto que representa los datos almacenados.
- "tipo" : tipo de disco (CD o HDD)
- "rpm" : velocidad de rotación.

## Justificación del diseño

## Pasos 

### Paso 1. Crear estructura básica y las interfaces 

En este primer paso he creado la estructura inicial del proyecto para organizar el código de manera modular y clara. Lo que he hecho ha sido crear una nueva carpeta llamada "src" con el comando por terminal "mkdir src" y he accedido con "cd src". Dentro, he generado los dos primeros archivos: main.cpp y  interfaces.hpp.
 
- **main.cpp** : Será el punto de entrada del programa.
  Aquí iré incluyendo las pruebas para compilar y ejecutar las distintas clases a medida que las vaya implementando.  

- **interfaces.hpp** : Este archivo define las interfaces base "Rotatorio" y "Almacenamiento" que contienen los comportamientos comunes que deberán implementar las clases derivadas.
  
Las interfaces se han definido con "struct" en lugar de "class" porque en C++ los "struct" son públicos por defecto, lo cual resulta más adecuado para este caso, ya que queremos que los métodos sean accesibles por las clases que los implementen. 

Por otro lado, los métodos se han declarado como virtuales puros (= 0), lo que significa que las clases que hereden de estas interfaces estarán obligadas a implementarlos. Además, he añadido destructores virtuales para permitir una herencia segura.

Antes de seguir, actualizamos los datos por GitHub.

 ```bash
git add main.cpp interfaces.hpp
git commit -m "P1: Creación de la estructura básica e interfaces"
git push
```
### Paso 2. Implementación de la clase "Cd"

En este paso he implementado la clase "Cd". Esta clase representa un disco compacto capaz de girar, almacenar datos, leerlos y mostrar información. En esta clase hemos heredado "Rotatorio" y "Almacenamiento".

**Archivos creados / modificados**
- Cd.hpp : define los atributos privados y los encabezados de los métodos.
- Cd.cpp : en este archivo se encuentra la implementación de los métodos definidos en el .hpp.
- main.cpp : actualizado para instanciar un objeto Cd y probarlo.

Actualización de GitHub: 

 ```bash
git add main.cpp Cd.hpp Cd.cpp
git commit -m "P2: Implementación clase Cd"
git push
git pull // Para ir actualizando el README.md en mi carpeta
```

### Paso 3. Implementación de la clase "DiscoDuro"

En este paso he implementado la clase "DiscoDuro". Esta clase representa un disco duro (HDD) capaz de girar, almacenar, leer y reportar información. En esta clase también hemos heredado "Rotatorio" y "Almacenamiento".

**Archivos creados / modificados**
- DiscoDuro.hpp : define los atributos privados y los encabezados de los métodos.
- DiscoDuro.cpp : implementación de los métodos definidos en el .hpp.
- main.cpp : actualizado para instanciar tanto un objeto "Cd" como un objeto "DiscoDuro" y probarlo el funcionamiento.

Actualización de GitHub: 

 ```bash
git add *
git commit -m "P3: Implementación clase Disco duro (HDD)"
git push
git pull // Para ir actualizando el README.md en mi carpeta
```

### Paso 4. Verificación final

Durante toda la práctica he utilizado el siguiente comando para compilar y ejecutar el programa:

 ```bash
g++ -std=c++17 -Wall -Wextra *.cpp -o prueba
./prueba
```
Este comando lo que hace es compilar el archivo cpp indicado del proyecto y genera un ejecutable llamado prueba. Además en este comando he incluido:

- std=c++17 : para especificar que estoy utilizando el estándar de C++17 (y así poder usar std::move sin problemas)
- -Wall : para activar los warning básicos y que me ayude a detectar errores
- -Wextra : para mostrar advertencias adicionales
  
<img width="925" height="205" alt="image" src="https://github.com/user-attachments/assets/5b34f9e0-14c1-4829-9f24-0d6e3788a44e" />






