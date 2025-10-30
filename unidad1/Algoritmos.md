### 🔢 Algoritmos, Pseudocódigo y Diagramas de Flujo  
# 🧠 Algoritmos

Un **algoritmo** es un método diseñado para resolver un problema mediante una  
**secuencia finita de pasos lógicos y ordenados**.  
Cada paso indica una acción específica que debe ejecutarse para alcanzar una solución[1].

---

## ⚙️ Características de un buen algoritmo

> 💡 Un buen algoritmo cumple con las siguientes características:

- ✅ **Preciso:** Los pasos deben estar claramente definidos y en orden lógico, sin ambigüedades.  
- 🔁 **Definido:** Siempre debe producir el mismo resultado si se repite con los mismos datos.  
- ⏳ **Finito:** Tiene un número limitado de pasos y debe terminar en algún momento[1].

---

### Partes fundamentales de un algoritmo

- 🧩 **Entrada:** Datos que se ingresan al sistema.  
- ⚙️ **Proceso:** Conjunto de operaciones o pasos que transforman los datos.  
- 📤 **Salida:** Resultado final que se obtiene después del procesamiento.

---

## 💻 Resolución de Problemas con una Computadora

El proceso para resolver un problema mediante una computadora comprende varias fases:

1. 🕵️‍♀️ **Análisis del problema:** Identificar los datos de entrada, salida, pasos a seguir y posibles restricciones.  
2. ✏️ **Diseño del algoritmo:** Determinar cómo realizará el programa la tarea. Aquí se utilizan dos herramientas esenciales:  
   - 📜 **Pseudocódigo**  
   - 🔄 **Diagramas de flujo**  
3. 💬 **Codificación:** Traducir el algoritmo a un lenguaje de programación (C, Python o Java).  
4. 🧪 **Pruebas:** Ejecutar el programa para verificar su funcionamiento y corregir errores.  
5. 📚 **Documentación y mantenimiento:** Dejar registro del funcionamiento del programa y cómo puede modificarse o mejorarse[1].


# 🏷️ Clasificación de los Algoritmos

Los algoritmos se pueden clasificar según el tipo de análisis que realizan o la forma en que se aplican los datos:

## 1. Algoritmos Cualitativos

- Se enfocan en la **calidad de los resultados** y en la toma de decisiones basadas en criterios no numéricos.  
- Se utilizan cuando no se requiere un cálculo exacto, sino una evaluación lógica o descriptiva.

**Ejemplo:**
Ejemplo
¿Qué hacer para probar el nuevo pastel de chocolate en la cafetería?

| **Versión simple**                  | **Versión numerada**                   |
| ----------------------------------- | -------------------------------------- |
| Inicio                              | 0. Inicio                              |
| Ir a la cafetería.                  | 1. Ir a la cafetería.                  |
| Pedir el nuevo pastel de chocolate. | 2. Pedir el nuevo pastel de chocolate. |
| Probar el pastel.                   | 3. Probar el pastel.                   |
| Pagar y salir.                      | 4. Pagar y salir.                      |
| Fin                                 | 5. Fin                                 |

 Aquí el resultado es cualitativo, porque se trata de la realización de acciones, no de números.

## 2. Algoritmos Cuantitativos

- Se centran en el **cálculo de valores numéricos exactos** y en la obtención de resultados medibles.  
- Se usan cuando se necesita un resultado preciso mediante operaciones matemáticas.

**Ejemplo:**

Ejemplo: ¿Qué hacer para sumar dos números?

0. Inicio
1. Numero uno 3.
2. Número dos 5.
3. Sumar 3 y 5.
4. Es resultado es 8.
5. Fin



Aquí el resultado es cuantitativo, porque se obtiene un número exacto mediante una operación matemática.

-------------

## 📝 Pseudocódigo

El **pseudocódigo** es una forma de escribir los pasos de un algoritmo usando un lenguaje similar al español,  
combinando instrucciones y decisiones lógicas. Permite planificar cómo resolver un problema antes de programarlo en un lenguaje real.

### 🎯 Objetivos del pseudocódigo

- 💡 **Expresar de manera clara la lógica de un proceso.**  
- 🔄 **Facilitar la traducción del algoritmo a un lenguaje de programación.**

---
## 🖥️ Herramienta Digital para Pseudocódigo

# 🖥️ PSeInt (Pseudocode Interpreter)
PSeInt es una de las herramientas digitales más utilizadas para representar algoritmos en pseudocódigo. Su uso facilita el aprendizaje de la lógica de programación y permite practicar antes de pasar a un lenguaje formal.
## 📝 Definición
Según **Celi (2023)**, PSeInt es un **software educativo interactivo** que facilita el aprendizaje de la **lógica de programación** y la **construcción de algoritmos en pseudocódigo en español** [2].  
Además, permite visualizar los algoritmos mediante **diagramas de flujo**, lo que ayuda a comprender mejor el funcionamiento de un programa.

**Valverde, Cajamarca y Moreano (2023)** indican que PSeInt también puede integrarse con **Diagramas de Flujo de Datos (DFD)**, extendiendo su uso a procesos más complejos [3].  
Por su parte, **Tinedo-Rodríguez (2023)** señala que esta herramienta **fortalece el pensamiento lógico y computacional**, además de mejorar habilidades cognitivas y lingüísticas [4].

PSeInt ofrece un **entorno de práctica interactivo**, simulando la experiencia de programar en un lenguaje real, lo que facilita la transición a lenguajes como **C, Java o Python**.  
Su interfaz intuitiva permite centrarse en la **lógica del problema**, sin complicaciones sintácticas.  
Además, permite realizar **pruebas rápidas de los algoritmos**, detectando errores lógicos antes de pasar a un lenguaje formal.

---

## ⚙️ Funciones principales

- 📝 **Crear, ejecutar y depurar algoritmos.**  
- 💡 **No requiere aprender sintaxis compleja** de un lenguaje formal.  
- 🔄 **Compatible con DFD** para procesos complejos.  
- 🧠 **Desarrolla pensamiento lógico y computacional.**

---

## 🌟 Beneficios

- 🎯 **Ideal para estudiantes principiantes.**  
- 🧩 **Refuerza habilidades cognitivas y lingüísticas.**  
- ✏️ **Permite planificar algoritmos** antes de codificarlos.
- 
  ---------------

  ## 📝 Ejemplo de código en PSeInt

El siguiente algoritmo muestra cómo se programa en **PSeInt**, utilizando un ejemplo de **suma de dos números**.

### 🔹 Estructura del código:

1. **Nombre del algoritmo:**  
   Se declara con `Algoritmo Suma_Dos_Numeros`.

2. **Definición de variables:**  
   Se usa `Definir` para declarar el tipo y nombre de cada variable.  
   Por ejemplo, `Entero` se utiliza para almacenar números enteros.

3. **Entrada de datos:**  
   `Leer` se usa para capturar información del usuario.

4. **Procesos o cálculos:**  
   Se realizan operaciones y se almacenan resultados en variables.

5. **Salida de datos:**  
   `Escribir` muestra resultados al usuario.

6. **Finalización:**  
   Se cierra el algoritmo con `FinAlgoritmo`.

  ## 📝 Ejemplo: Suma de dos números

```pseudocode
Algoritmo Suma_Dos_Numeros
    // Definir variables
    Definir num1, num2, suma Como Entero

    // Entrada de datos
    Escribir "Ingrese el primer número:"
    Leer num1
    Escribir "Ingrese el segundo número:"
    Leer num2

    // Proceso: sumar los dos números
    suma <- num1 + num2

    // Salida: mostrar el resultado
    Escribir "La suma de ", num1, " y ", num2, " es: ", suma
FinAlgoritmo
```

## 📊 Diagrama de Flujo

Un **diagrama de flujo** es una representación gráfica de un algoritmo, proceso o sistema,  
donde cada paso se muestra mediante símbolos estandarizados y las flechas indican la secuencia de ejecución.  
Se utiliza para planificar, comprender y documentar procesos, y resulta muy útil tanto en programación como en administración y otras áreas donde se necesite organizar procedimientos de manera clara[1].

### 🎯 Objetivos del diagrama de flujo

- 🖼️ **Visualizar de forma clara y organizada los pasos de un proceso.**  
- 🔄 **Facilitar la comprensión de la lógica de un algoritmo.**  
- 🐞 **Detectar errores antes de programar o ejecutar el proceso.**

*A continuación, se presenta el diagrama de flujo correspondiente al algoritmo anterior.*

![suam](https://github.com/user-attachments/assets/ad26856a-e592-4145-99bb-2185f86a0914)

----

# 💻 Lenguaje de Programación
# 💻 Lenguaje C

## 📝 Definición

El **lenguaje C** es un lenguaje de programación estructurado creado en la década de 1970.  
Permite desarrollar programas de manera **eficiente y comprensible**, combinando **control de bajo nivel** con **estructuras de alto nivel** como funciones, condicionales y bucles.  
Es ampliamente utilizado en la enseñanza universitaria por su capacidad de enseñar **lógica de programación** y **resolución de problemas** [5].

En palabras propias, C es un lenguaje que permite **crear programas de manera ordenada y eficiente**.  
Me parece interesante porque combina **control directo sobre la memoria** con estructuras como funciones y bucles, lo que permite escribir **programas claros y poderosos**.  
Además, es muy utilizado para aprender lógica de programación y entender cómo funcionan los algoritmos, y ha servido como base para otros lenguajes como **C++ y Java** [5].

---

## 🌟 Características principales

- 🧩 **Estructurado:** Facilita la organización de algoritmos mediante funciones y bloques de código.  
- 🌐 **Portátil:** Los programas pueden ejecutarse en diferentes sistemas operativos.  
- ⚡ **Eficiente:** Permite manipular memoria directamente y optimizar recursos.  
- 🔧 **Base para otros lenguajes:** Inspiró el desarrollo de C++, C# y Java.  
- 🔄 **Versátil:** Se utiliza en sistemas operativos, software embebido y aplicaciones científicas [1].

  ## 💻 Ejemplo: Hola Mundo

### 🌟 En Lenguaje C

```c
#include <stdio.h>

int main() {
    // Mostrar mensaje en pantalla
    printf("Hola Mundo\n");
    return 0;
}
```
-------
### 🌟 Depuración
------
![hola](https://github.com/user-attachments/assets/4470868d-5ffc-4a8f-970b-147d02e8aba2)

----
En este código se muestra el típico ejemplo de **“Hola Mundo”**, utilizado para introducir el lenguaje C.
Este programa está compuesto por las siguientes partes:

**#include <stdio.h>**: Es una librería estándar del lenguaje C que permite usar funciones de entrada y salida, como printf, que se utiliza para mostrar mensajes en pantalla.

**int main():** Es la función principal del programa; todo código en C empieza su ejecución desde aquí.

**printf("Hola Mundo\n");**: Es una instrucción que imprime un mensaje en la pantalla.

**return 0;**: Indica que el programa finalizó correctamente.

En resumen, este código enseña la estructura básica de un programa en C:
incluir librerías, definir la función principal, ejecutar instrucciones y finalizar correctamente.

# 🧩 Para poder compilar y ejecutar un programa en C se hace lo siguiente

## 1. **Compilación**

El comando:

```bash
gcc holamundo.c -o holamundo
```


## 💡 Significa lo siguiente:

- **`gcc`** → es el compilador de C (**GNU Compiler Collection**).  
- **`holamundo.c`** → es el archivo de código fuente que contiene tu programa.  
- **`-o holamundo`** → indica el nombre del archivo ejecutable de salida.  

👉 **En resumen:**  
Este comando **traduce tu código C** a un archivo ejecutable que tu computadora puede entender.  
Después de ejecutarlo, se genera un archivo llamado **`holamundo.exe`**.  

---

Luego usas este comando:


**.\holamundo.exe**


**.\ →** indica que el archivo se encuentra en el directorio actual.

**holamundo.exe →** es el programa compilado que vas a ejecutar.

👉 Al presionar Enter, el sistema ejecuta el programa y muestra el resultado (por ejemplo: Hola mundo).
| Etapa           | Comando                        | Qué hace                                                                 |
| :-------------- | :----------------------------- | :----------------------------------------------------------------------- |
| **Compilación** | `gcc holamundo.c -o holamundo` | Traduce el código fuente en C a lenguaje máquina y genera un ejecutable. |
| **Ejecución**   | `.\holamundo.exe`              | Ejecuta el programa y muestra el resultado.                              |

  --------
[Presione aqui para volver a la unidad](Unidad1.md)
