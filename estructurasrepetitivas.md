### 🔄 Estructuras Repetitivas (tipos)

Las **estructuras repetitivas** permiten ejecutar un conjunto de instrucciones varias veces sin tener que escribirlas repetidamente.  
Se utilizan cuando se necesita **repetir tareas**, recorrer datos, validar información o realizar cálculos en serie.

Existen tres tipos principales de ciclos en C:

---

## ✔️ 1. Bucle `while` (mientras)

El ciclo **while** repite un bloque de instrucciones **mientras la condición sea verdadera**.  
Antes de cada repetición, verifica la condición.  
Si la condición es falsa desde el inicio *el ciclo no se ejecuta*.

🔸 **Cuándo usarlo:**  
- Cuando no se sabe cuántas veces se repetirá el ciclo.  
- Cuando depende de una condición externa que puede cambiar durante la ejecución.

🔹 **Estructura en C:**
```c
while (condicion) {
    // instrucciones
}
```

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




## ✔️ 2. Bucle *do…while* (hacer…mientras)

A diferencia del `while`, este ciclo **se ejecuta al menos una vez**, porque primero realiza las instrucciones y luego verifica la condición.

### 🔸 Cuándo usarlo:
- Cuando se necesita que el ciclo se ejecute **mínimo una vez**.
- Cuando se **piden datos al usuario** y luego se valida la condición.
- Cuando la acción debe realizarse antes de comprobar si continúa.

### 🔹 Estructura en C:
```c
do {
    // instrucciones
} while (condicion);
```

## ✔️ 3. Bucle *for* (para)

El ciclo `for` es ideal cuando se conoce de antemano la cantidad de repeticiones.  
Incluye tres partes importantes dentro del paréntesis:

- **Inicialización** → establece el valor inicial del contador.  
- **Condición** → determina cuántas veces se repetirá.  
- **Incremento/Decremento** → cambia el valor del contador en cada vuelta.

### 🔹 Estructura en C:
```c
for (inicializacion; condicion; incremento) {
    // instrucciones
}
```



