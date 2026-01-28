## 📌 Modularidad

Cuando se desarrollan algoritmos largos y complejos, una técnica eficaz para reducir la complejidad consiste en dividir el programa en partes más pequeñas, siguiendo el principio de **divide y vencerás**.

En programación, esta técnica se conoce como **modularización**, la cual forma parte de los paradigmas fundamentales del desarrollo de software.

Los módulos pueden recibir distintos nombres, tales como:

- **Funciones**
- **Procedimientos**
- **Rutinas**
- **Subrutinas**

Cada módulo se encarga de realizar una tarea específica dentro del programa.

--------------------

## 📌 Funciones

Una **función** es un conjunto de sentencias que realiza una tarea determinada y cumple un propósito único e identificable dentro de un programa.

En un lenguaje de programación como **C**, existen dos tipos de funciones:

- **Funciones predeterminadas por el lenguaje**, incluidas en librerías, por ejemplo:
  ```c
  #include <stdio.h>
  ```
- **Funciones definidas por el desarrollador**, creadas para resolver necesidades específicas del programa.
- Las funciones solicitadas por el main a su vez pueden llamar a otras funciones.

Las funciones no pueden ejecutarse por sí solas; deben ser llamadas desde un programa principal, generalmente la función `main()`.

<img width="577" height="151" alt="image" src="https://github.com/user-attachments/assets/496fcaf7-86cf-4778-966b-5130d0878925" />

------------------------------------------

## 📌 Estructura de una función

| Parte | Descripción |
|------|-------------|
| Cabecera | Indica el tipo de dato que retorna la función, su nombre y los parámetros que recibe. |
| Cuerpo | Conjunto de instrucciones encerradas entre llaves `{}` y, si corresponde, el valor de retorno. |

----------------------------

## 🔧 Tipos de funciones
### ➤ Funciones sin valor de retorno ni parámetros

Son funciones que no reciben datos ni devuelven resultados.  
Cuando una función no utiliza la instrucción `return`, se considera un **procedimiento**.

 ```
#include <stdio.h>

void suma();   // Prototipo de la función

int main() {
    suma();
    return 0;
}

void suma() {
    int a, b;
    int resultado = 0;

    printf("Ingrese el primer valor: ");
    scanf("%d", &a);

    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);

    resultado = a + b;

    printf("La sumatoria es: %d\n", resultado);
}
 ```
Copilación 
<img width="242" height="75" alt="image" src="https://github.com/user-attachments/assets/72dec966-87c4-4e9c-85b1-3d7861bf8206" />

🔹 Funciones con retorno de valor

Estas funciones realizan una operación y devuelven un resultado al programa principal.
 ```
#include <stdio.h>
int suma();

void main() {
    int resultado;
    resultado = suma();
    printf("La sumatoria es: %d\n", resultado);
}

int suma() {
    int a, b;
    int suma =0;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);
    suma = a + b;
    return suma;
}

 ```
Copilación
<img width="208" height="78" alt="image" src="https://github.com/user-attachments/assets/94d59f43-9c42-4450-b223-25f089f23416" />

## Funciones con envío de parámetros

Los parámetros pueden enviarse de dos maneras:

### 🔹 Envío por valor
En el envío por valor, se transmite únicamente el contenido de la variable.  
Por ejemplo, si una variable tiene el valor `5`, se envía el número `5` a la función para que lo utilice en sus instrucciones.  
En este tipo de envío, la función trabaja con una copia del valor, por lo que la variable original no se altera.
🔹 Envío de parámetros por valor


### 🔹 Envío por referencia
En el envío por referencia, se envía la dirección de memoria de la variable.  
Esto significa que, si dentro de la función se realiza algún cambio sobre el parámetro recibido, la variable original, fuera de la función, también se verá afectada por dicho cambio.



