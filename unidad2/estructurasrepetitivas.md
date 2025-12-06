### 🔄 Estructuras Repetitivas 

Las **estructuras repetitivas** permiten ejecutar un conjunto de instrucciones varias veces sin tener que escribirlas repetidamente.  
Se utilizan cuando se necesita **repetir tareas**, recorrer datos, validar información o realizar cálculos en serie.


---

## ✔️ 1. Bucle `while` (mientras)
El ciclo **while** repite un bloque de instrucciones **mientras la condición sea verdadera** [5].  
Antes de cada repetición, se verifica la condición.  
Si la condición es falsa desde el inicio, *el ciclo no se ejecuta ni una sola vez*.  

Este tipo de ciclo es útil para controlar la repetición basada en **una condición que puede variar durante la ejecución del programa**. Permite crear bucles que continúan hasta que se cumpla una determinada situación, sin necesidad de conocer de antemano el número exacto de repeticiones.

### 🔸 Cuándo usarlo
- Cuando no se sabe cuántas veces se repetirá el ciclo.  
- Cuando la repetición depende de una condición externa que puede cambiar durante la ejecución.  
- Para validar entradas de usuario, esperar una señal o condición, o controlar procesos que dependen de valores dinámicos.

🔹 **Estructura en C:**
```c
while (condicion) {
    // instrucciones
}
```
### Ejercicio
### ⭐ Obtener la suma de diez cantidades ingresadas por el usuario
Este programa solicita al usuario que ingrese **10 números**, uno por uno, y va acumulando cada valor para obtener la **suma total** al finalizar.


```c
#include <stdio.h>
int main() {
    int contador = 1;
    int su = 0;
    int n;
  
    while (contador <= 10) {
        printf("Ingrese un numero: ");
        scanf("%d", &n);
        su = su + n;
        contador = contador + 1;
    }

    printf("La suma total es: %i\n", su);
    
    return 0;
}
```
### ⭐ Diagrama de flujo – Sumar diez cantidades ingresadas por el usuario

<img width="314" height="492" alt="image" src="https://github.com/user-attachments/assets/0d71a3c3-4cc3-4257-a9b7-10b3d231a71f" />

------------



## ✔️ 2. Bucle *do…while* (hacer…mientras)


A diferencia del ciclo `while`, el bucle **do…while** **se ejecuta al menos una vez**, ya que primero realiza las instrucciones y luego verifica la condición [5].  
Esto lo hace ideal cuando es necesario garantizar que un bloque de código se ejecute antes de evaluar si debe repetirse.

El bucle *do…while* permite crear procesos donde **la acción inicial es obligatoria**, y la repetición depende de una condición que se comprueba después de ejecutar el bloque de instrucciones. Es útil para validar entradas, realizar operaciones mínimas o controlar ciclos donde siempre se requiere un primer paso antes de la verificación.

### 🔸 Cuándo usarlo:
- Cuando se necesita que el ciclo se ejecute **mínimo una vez**, independientemente de la condición.  
- Cuando se **piden datos al usuario** y luego se valida si se debe repetir el ingreso.  
- Cuando la acción debe realizarse antes de comprobar si el ciclo continúa.  
- Para procesos interactivos donde la operación inicial no puede omitirse, como menús, cálculos preliminares o confirmaciones.

### 🔹 Ejemplo en C:

```c
int numero;
do {
    printf("Ingrese un número mayor que 0: ");
    scanf("%d", &numero);
} while (numero <= 0);

### 🔹 Estructura en C:
```c
do {
    // instrucciones
} while (condicion);
```
### Ejercicio
## Realizar la división de dos números enteros, validando que el denominador sea diferente de cero.
El programa solicita al usuario ingresar dos números enteros: un numerador y un denominador.  
Antes de realizar la división, verifica que el denominador no sea cero, ya que dividir entre cero no es permitido.  
Si el usuario ingresa un denominador igual a cero, el programa muestra un mensaje de error y vuelve a pedir un valor válido.  
Una vez que el denominador es diferente de cero, realiza la división y muestra el cociente.

```c
#include <stdio.h>

int main() {
    float numerador, denominador;
    float resultado;

    printf("Ingrese el numerador: ");
    scanf("%f", &numerador);

    printf("Ingrese el denominador: ");
    scanf("%f", &denominador);

    // Validar que el denominador no sea cero
    while (denominador == 0) {
        printf("Error: el denominador no puede ser cero.\n");
        printf("Ingrese nuevamente el denominador: ");
        scanf("%f", &denominador);
    }

    resultado = numerador / denominador;

    printf("El resultado de la division es: %.2f\n", resultado);

    return 0;
}
}
```
### ⭐ Diagrama de flujo – Realizar la división de dos números enteros, validando que el denominador sea diferente de cero.

<img width="497" height="630" alt="image" src="https://github.com/user-attachments/assets/4a0e1eea-fdf3-4498-a65e-f567539f1fec" />

---------------------

## ✔️ 3. Bucle *for* (para)

El ciclo `for` es ideal cuando se conoce de antemano la **cantidad de repeticiones** que se desea realizar.  
Se utiliza para ejecutar un bloque de instrucciones un número específico de veces, facilitando la lectura y organización del código [5].

- **Inicialización** → establece el valor inicial del contador.  
- **Condición** → determina cuántas veces se repetirá.  
- **Incremento/Decremento** → cambia el valor del contador en cada vuelta .

### 🔹 Estructura en C:
```c
for (inicializacion; condicion; incremento) {
    // instrucciones
}
```

### Ejercicio
## Cálculo del factorial de un número
El programa tiene como objetivo **obtener el factorial de un número ingresado por teclado**.  
El factorial de un número **N** es la multiplicación de todos los números enteros desde 1 hasta N.
Para calcularlo, el programa solicita un número al usuario y luego utiliza un ciclo `for` que multiplica todos los valores desde 1 hasta el número ingresado.  

```c
#include <stdio.h>
int main() {
    int cont, n;
    int factorial = 1;

    printf("Ingrese un número: ");
    scanf("%i", &n);

    for (cont = 1; cont <= n; cont++) {
        factorial = factorial * cont;
    }

    printf("El factorial del número es %i\n", factorial);

    return 0;
}
```
### ⭐ Diagrama de flujo – Cálculo del factorial de un número

<img width="555" height="492" alt="image" src="https://github.com/user-attachments/assets/a4f9d99e-b3cd-4d33-a19b-86b547cb5362" />

--------------------

[Presione aqui para volver a la unidad](unidad2.md)





