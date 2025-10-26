 # 🔹 Ejemplos de Algoritmos con Estructuras Lineales/Secuenciales
## 🔹 Algoritmo en Pseint: Conversion de medidas  

📌 **Enunciado:**   
Desarrollar un algoritmo que solicite al usuario una cantidad en **metros** y la convierta a **kilómetros, centímetros y milímetros**, mostrando todos los resultados de forma clara.


### 🧠 Pseudocódigo:

```pseudocode
Algoritmo Conversion_De_Medidas
    // DEFINIR VARIABLES
    Definir metros, km, cm, mm Como Real

    // ENTRADA:
    // Se solicita al usuario ingresar una cantidad en metros.
    Escribir "Ingrese la cantidad en metros:"
    Leer metros

    // PROCESO:
    // Se realizan las conversiones correspondientes.
    km <- metros / 1000
    cm <- metros * 100
    mm <- metros * 1000

    // SALIDA:
    // Se muestran los resultados de la conversión en diferentes unidades.
    Escribir "Medida ingresada: ", metros, " m"
    Escribir "Equivalente en kilómetros: ", km, " km"
    Escribir "Equivalente en centímetros: ", cm, " cm"
    Escribir "Equivalente en milímetros: ", mm, " mm"
FinAlgoritmo

```


## 🔹 Diagrama de flujo: Conversión de Medidas (Metros a Km, Cm, Mm)
![medidas](https://github.com/user-attachments/assets/a0914a9e-2a6b-4aae-9dae-531f2e0064c6)

## 🔹 Algoritmo: Calculo_De_Aceleracion

📌 **Enunciado:**   
Calcular la aceleración de un cuerpo solicitando la velocidad inicial, velocidad final y el tiempo transcurrido. Se mostrará la aceleración con sus unidades.

---

### 🧠 Pseudocódigo:

```pseudocode
Algoritmo Calculo_De_Aceleracion

    // 1️⃣ Definir variables
    Definir velocidadInicial, velocidadFinal, tiempo, aceleracion Como Real

    // 2️⃣ Entrada: solicitar datos al usuario
    Escribir "Ingrese la velocidad inicial (m/s): "
    Leer velocidadInicial
    Escribir "Ingrese la velocidad final (m/s): "
    Leer velocidadFinal
    Escribir "Ingrese el tiempo transcurrido (s): "
    Leer tiempo

    // 3️⃣ Proceso: aplicar la fórmula de la aceleración
    // a = (velocidadFinal - velocidadInicial) / tiempo
    aceleracion <- (velocidadFinal - velocidadInicial) / tiempo

    // 4️⃣ Salida: mostrar resultados
    Escribir "Velocidad inicial: ", velocidadInicial, " m/s"
    Escribir "Velocidad final: ", velocidadFinal, " m/s"
    Escribir "Tiempo transcurrido: ", tiempo, " s"
    Escribir "La aceleración del cuerpo es: ", aceleracion, " m/s²"

FinAlgoritmo
```
-------


## 🔹 Diagrama de flujo: Calculo de la aceleracion

![aceleracion](https://github.com/user-attachments/assets/3ecaea6d-0383-4cba-af5b-ebc7b6653e51)




# 💻 Implementación en Lenguaje C

📌 **Nota:**  
Los algoritmos presentados anteriormente (Conversión de Medidas, Cálculo de Aceleración) **fueron implementados en lenguaje C**, respetando la lógica secuencial de cada uno.

---

## 1️⃣ Conversión de Medidas (Metros a Km, Cm, Mm) en C

```c
#include <stdio.h>

int main() {
    float metros;
    
    // Entrada
    printf("Ingrese cantidad en metros:\n");
    scanf("%f", &metros); 

    // Proceso
    float km = metros / 1000;
    float cm = metros * 100;
    float mm = metros * 1000;

    // Salida
    printf("La medida en metros es: %f m\n", metros);
    printf("Conversión a kilómetros: %f km\n", km);
    printf("Conversión a centímetros: %f cm\n", cm);
    printf("Conversión a milímetros: %f mm\n", mm);

    return 0;
}
```
### 🐞 Depuración del código de Conversión de Medidas



## 2️⃣ Cálculo de Aceleración en C

```c
#include <stdio.h>

int main() {
    
    float velocidadInicial, velocidadFinal, tiempo, aceleracion;
 
    printf("Ingrese la velocidad inicial (m/s): ");
    scanf("%f", &velocidadInicial);

    printf("Ingrese la velocidad final (m/s): ");
    scanf("%f", &velocidadFinal);

    printf("Ingrese el tiempo transcurrido (s): ");
    scanf("%f", &tiempo);

    // Cálculo de aceleración
    aceleracion = (velocidadFinal - velocidadInicial) / tiempo;

    printf("\nLa aceleracion del cuerpo es: %f m/s^2\n", aceleracion);

    return 0;
}

```
### 🐞 Depuración del código de cálculo de acelaración
-----
[Presione aqui para volver al inicio](inicio.md)

