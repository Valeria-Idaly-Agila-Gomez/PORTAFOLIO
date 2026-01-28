# 📚 Arreglos (Arrays)

Un **arreglo** (en inglés: *array*) es una **estructura de datos** que permite almacenar **varios elementos del mismo tipo** bajo un solo nombre.  
Cada dato dentro del arreglo se llama **elemento**, y se accede a él mediante **índices**, que comienzan en **0**.

💡 **Ventajas de los arreglos:**

- Acceso rápido a elementos mediante índices.
- Organización y manejo eficiente de datos relacionados.
- Facilidad para iterar con bucles.

--------------------
## 🔹 Tipos de arreglos
# 📋 Arrays Unidimensionales (Vectores o Listas)

Un **array unidimensional**, también llamado **vector** o **lista**, es una colección de datos del mismo tipo que se almacena en **posiciones consecutivas de memoria** y tiene un **nombre común**.  
Para referirse a un elemento específico se utiliza un **índice**, que indica su posición relativa en el array.

- Si el array tiene **una dimensión**, se llama **vector** o **lista**.  
- Si tiene **dos dimensiones**, se llama **matriz**.



## 🔹 Declaración y sintaxis en C

Todo array debe ser **declarado con un tipo de dato**, un nombre y el número de elementos que contendrá.  

### Sintaxis general

```c
<tipo_dato> <identificador>[<num_elementos>];
```
# 📌 Enunciado

Escribe un programa en C que permita al usuario ingresar los elementos de un **array unidimensional**, luego muestre todos los elementos con sus índices, calcule la **suma** y el **promedio** de los valores ingresados.
```
#include <stdio.h>

int main() {
    int n;

    printf("Ingrese la cantidad de elementos del array: ");
    scanf("%d", &n);

    int lista[n];  
    int suma = 0;

    // Ingrese los elementos del array
    for(int i = 0; i < n; i++) {
        printf("Ingrese el elemento %d: ", i);
        scanf("%d", &lista[i]);
        suma += lista[i];  // Sumar los elementos
    }

    // Mostramos los elementos ingresados
    printf("\nLos elementos del array son:\n");
    for(int i = 0; i < n; i++) {
        printf("Elemento[%d] = %d\n", i, lista[i]);
    }

    // Calculamos y mostramos el promedio
    float promedio = (float)suma / n;
    printf("\nLa suma de los elementos es: %d\n", suma);
    printf("El promedio es: %.2f\n", promedio);

    return 0; 
}

```
#🖥️ Compilacióm

<img width="340" height="316" alt="image" src="https://github.com/user-attachments/assets/51511afa-5d78-479f-bfe4-5463740393ad" />

-----------------

# 📌 Array Bidimensional (Matriz)

Un **array bidimensional**, también llamado **matriz** o **vector de vectores**, es una estructura donde **el orden de los elementos es significativo**.  
Para identificar cada elemento se necesitan **dos subíndices**: uno para la **fila** y otro para la **columna** (Szuhay, 2022).

---

## 🔹 Dimensionamiento en C

En C, al declarar una matriz:

1. Primero se coloca el **tipo de dato**.  
2. Luego el **identificador** (nombre de la variable).  
3. Finalmente, entre **corchetes `[ ]`** se indica el número de **filas** y **columnas**.  

### Sintaxis general

```c
<tipo_dato> <identificador>[<num_filas>][<num_columnas>];
```
# 📌 Enunciado

Escribe un programa en C que almacene una **matriz de 3x4** con valores enteros predefinidos, y luego muestre cada elemento indicando su **posición en filas y columnas**.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int matriz[3][4];

    // Asignación de valores a la matriz
    matriz[0][0] = 1;
    matriz[0][1] = 5;
    matriz[0][2] = 8;
    matriz[0][3] = 3;
    matriz[1][0] = 2;
    matriz[1][1] = 3;
    matriz[1][2] = 6;
    matriz[1][3] = 8;
    matriz[2][0] = 5;
    matriz[2][1] = 7;
    matriz[2][2] = 9;
    matriz[2][3] = 4;

    // Recorrido e impresión de la matriz
    for (int i = 0; i < 3; i++) { // filas
        for (int j = 0; j < 4; j++) { // columnas
            printf("Elemento en la posicion [%i][%i]: %i\n", i, j, matriz[i][j]);
        }
    }

    return 0;
}
```
## 💻 Compilación


<img width="250" height="266" alt="image" src="https://github.com/user-attachments/assets/c5831bf2-eaf3-487e-9c6b-1d5074808fc9" />


# 📦 Arrays Tridimensionales

Cuando tenemos **varias filas, columnas y profundidad**, usamos un **array tridimensional**.  
La representación general es:

- `i` → profundidad (nivel o capa)  
- `j` → número de filas  
- `k` → número de columnas 

## 🔹 Sintaxis en C


```c
<tipo_dato> <identificador>[<profundidad>][<num_filas>][<num_columnas>];

```
# 📌 Enunciado

Mostrar los elementos de un **arreglo tridimensional 3D** de enteros indicando su **posición [capa][fila][columna]**.

---

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int arregloTridimensional[2][3][2];

    // Capa 1
    arregloTridimensional[0][0][0] = 1;
    arregloTridimensional[0][0][1] = 2;
    arregloTridimensional[0][1][0] = 5;
    arregloTridimensional[0][1][1] = 8;
    arregloTridimensional[0][2][0] = 7;
    arregloTridimensional[0][2][1] = 9; 

    // Capa 2
    arregloTridimensional[1][0][0] = 3;
    arregloTridimensional[1][0][1] = 4;
    arregloTridimensional[1][1][0] = 6;
    arregloTridimensional[1][1][1] = 0;
    arregloTridimensional[1][2][0] = 11;
    arregloTridimensional[1][2][1] = 13;

    // Mostrar los elementos
    for (int i = 0; i < 2; i++) { // capas
        for (int j = 0; j < 3; j++) { // filas
            for (int k = 0; k < 2; k++) { // columnas
                printf("Elemento en la posicion [%i][%i][%i]: %i\n", i, j, k, arregloTridimensional[i][j][k]);
            }
        }
    }

    return 0;
}
```
## 💻 Compilación

<img width="274" height="248" alt="image" src="https://github.com/user-attachments/assets/1fe9dcbf-43f5-4c7d-b1d1-2bd0ce1bc49d" />





