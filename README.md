# Prueba Técnica - Natalia Sempere Sánchez

Antes de empezar a programar, he analizado qué comportamientos (métodos) y propiedades (atributos) comparten los objetos "Cd" y "DiscoDuro". El objetivo es decidir qué métodos deben ir en las interfaces y cuáles serán específicos de cada clase.

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

Para esta prueba técnica he decidido realizar la práctica en **C++**, ya que es un lenguaje con el que me siento más cómoda y que considero adecuado para trabajar con conceptos de programación orientada a objetos, como la herencia, la abstracción y modularidad.

En el diseño de esta práctica también considero importante organizar el código en archivos .hpp y .cpp, ya que separar las declaraciones de las implementaciones facilita la lectura, el mantenimiento y la depuración del proyecto. Además, esta separación mejora la reutilización del código y permite compilar únicamente las partes que cambian, haciendo el desarrollo más eficiente y claro.


## Pasos a seguir

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
- **Cd.hpp** : define los atributos privados y los encabezados de los métodos.
- **Cd.cpp** : en este archivo se encuentra la implementación de los métodos definidos en el .hpp.
- **main.cpp** : actualizado para instanciar un objeto Cd y probarlo.

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
- **DiscoDuro.hpp** : define los atributos privados y los encabezados de los métodos.
- **DiscoDuro.cpp** : implementación de los métodos definidos en el .hpp.
- **main.cpp** : actualizado para instanciar tanto un objeto "Cd" como un objeto "DiscoDuro" y probarlo el funcionamiento.

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

### Paso 5. Archivos finales

El proyecto completo queda organizado dentro de la carpeta src/ con los siguientes archivos : 

<img width="925" height="205" alt="image" src="https://github.com/user-attachments/assets/ae1a9212-0f8b-42f5-911f-662a9370598e" />

Cada archivo cumple una función específica : 

- interfaces.hpp: define los comportamientos comunes que comparten los discos.
- Cd.hpp / Cd.cpp: representan el comportamiento específico del CD.
- DiscoDuro.hpp / DiscoDuro.cpp: implementan la lógica del disco duro.
- main.cpp: instancia ambos objetos y verifica todos los métodos.

## Bonus

En esta parte se plantea si es posible reutilizar las interfaces y clases desarrolladas para otros objetos similares; en este caso se mencionan los LP (vinilo), BluRay y Ruedas/Frisbees. 

El modelo creado anteriormente **sí** podría ampliarse para incluir estos otros tipos de discos o elementos giratorios. 
A continuación se analizan los ejemplos propuestos : 

- **LP** : gira y almacena información (analógica).
- **BluRay** : gira, pero tiene más capacidad y otro tipo de lectura (láser azul).
- **Ruedas o frisbees** : giran, pero no almacenan datos

Para el caso de **LP y BluRay**, se podría implementar nuevas clases siguiendo la misma estructura utilizada para el "Cd" y "DiscoDuro", modificando únicamente los mecanismos específicos para cada caso (capacidad y tipo de lectura en este caso). 

Por otro lado, para las **ruedas o frisbees**, no se implementaría la interfaz "Almacenamiento", ya que estos objetos no guardan datos. Por lo tanto, las clases definidas para estos objetos solo heredarían la interfaz "Rotatorio", manteniendo únicamente el comportamiento del giro.

## Conclusión final

A lo largo del desarrollo se han implementado con éxito las interfaces "Rotatorio" y "Almacenamiento", y las clases concretas indicadas, que heredan y definen sus propios comportamientos.

El diseño propuesto permite observar cómo, mediante la herencia múltiple y la programación orientada a interfaces, es posible construir sistemas modulares, extensibles y fáciles de mantener.
Cada clase encapsula su lógica específica, mientras comparte una base común que garantiza coherencia y reutilización del código.
Además, el modelo diseñado es escalable, permitiendo incoroporar nuevas clases o interfaces sin alterar la arquiteectura existente.

