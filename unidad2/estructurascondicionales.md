# 🧩 Estructuras Condicionales

Las **estructuras condicionales** permiten que un programa **tome decisiones** dependiendo de si una condición es verdadera o falsa.  
Gracias a ellas, el programa puede ejecutar diferentes instrucciones según la situación, haciendo el software más flexible y lógico.

---

## ✔️ 1. Estructura Condicional Simple 

La estructura condicional simple se usa cuando se quiere que **solo se ejecute una acción si la condición se cumple**.  
Si la condición es falsa, **no se ejecuta nada**.

### 🔸 Su estructura en C es:
```c
if (condicion) {
    // instrucciones
}
```
### Ejemplo: Leer un número y mostrar un mensaje si es impar ✨

Este programa lee un número entero ingresado por el usuario y muestra un mensaje si el número es impar.

```c
#include <stdio.h>
int main() {
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num % 2 == 1) {
        printf("El numero es impar.\n");
    }

    return 0;
}
```
### Diagrama de flujo: Leer un número y mostrar si es impar ⭐
<img width="579" height="511" alt="image" src="https://github.com/user-attachments/assets/ffffa22c-f4a5-4c23-9f2a-efcede20548b" />

--------


## ✔️ 2. Estructura Condicional Doble 

Se utiliza cuando siempre se debe ejecutar **una de dos opciones**:

- Una si la condición es verdadera  
- Otra si es falsa  

### 🔸 Su estructura es:

```c
if (condicion) {
    // instrucciones si es verdadero
} else {
    // instrucciones si es falso
}
```


### 📘 Ejemplo: Solicitar un número entero y verificar si es par o impar

Este programa pide al usuario que ingrese un número entero y determina si dicho número es **par** o **impar**.

```c
#include <stdio.h>
int main() {
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("El numero es par.\n");
    } else {
        printf("El numero es impar.\n");
    }

    return 0;
}
```

### Diagrama de flujo: Leer un número y mostrar si es par o impar ⭐

<img width="709" height="491" alt="image" src="https://github.com/user-attachments/assets/701dd4a0-b608-4b7d-9482-bb183799afd8" />

-----------------------

## ✔️ 3. Estructura Condicional Múltiple

La estructura condicional múltiple permite elegir **una opción entre varias** según el valor de una variable.  
En C se usa con **switch**, y cada opción se define con un **case**.  
También incluye un **default** para cuando ningún caso coincide.

### 🔸 Su estructura en C es:
```c
switch (variable) {
    case valor1:
        // instrucciones
        break;

    case valor2:
        // instrucciones
        break;

    default:
        // instrucciones si no coincide
        break;
}
```

### 📘 Ejemplo: Mostrar el nombre del día según un número ingresado

Se desea diseñar un algoritmo que escriba el nombre de un día de la semana según el valor de una variable **DIA** ingresada por teclado.
El usuario ingresa un número del **1 al 7**, y el programa muestra el día correspondiente:

```c
#include <stdio.h>

int main() {

    int dia; 

    printf("Ingrese el dia de la semana en numero del 1 al 7:\n");
    scanf("%i", &dia);

    getchar();

    switch (dia) {
        case 1: 
            printf("El dia es Lunes\n");
            break;
        case 2: 
            printf("El dia es Martes\n");
            break;
        case 3: 
            printf("El dia es Miercoles\n");
            break;
        case 4: 
            printf("El dia es Jueves\n");
            break;
        case 5: 
            printf("El dia es Viernes\n");
            break;
        case 6: 
            printf("El dia es Sabado\n");
            break;
        case 7: 
            printf("El dia es Domingo\n");
            break;
        default:
            printf("Numero ingresado no valido\n");
            break;
    }

    return 0;

}
```

### ⭐ Diagrama de flujo –  Mostrar el nombre del día según un número ingresado
<img width="857" height="208" alt="image" src="https://github.com/user-attachments/assets/86edb297-388f-4e05-afd4-0380fcd52178" />



[Presione aqui para volver a la unidad](unidad2.md)

