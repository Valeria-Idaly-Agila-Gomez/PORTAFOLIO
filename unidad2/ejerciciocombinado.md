## ⭐💻 Ejercicio: Combinando estructuras condicionales y repetitivas (Java) 🔁⚙️


Este ejercicio consiste en aplicar tanto **estructuras condicionales** (`if`, `else`) como **estructuras repetitivas** (`for`, `while`, `do…while`) en un mismo programa en Java, para resolver un problema específico.

-----------------

|📝 **Descripción del problema** |
|---------------------------------|
| El programa tiene como objetivo registrar la compra realizada por un cliente, solicitando la información de varios productos e indicando al final el total a pagar y el cambio correspondiente. |
| Primero, el sistema pide al usuario ingresar cuántos productos va a comprar. Luego, para cada producto se solicita su nombre, la cantidad a adquirir y el precio unitario, validando que ambos valores sean mayores que cero. |
| Con estos datos, el programa calcula el subtotal de cada producto y lo suma al total general de la compra. |
| Finalmente, se solicita el monto con el que el cliente pagará. Si es menor al total, se indica que el dinero es insuficiente; de lo contrario, se calcula y muestra el cambio que debe recibir. |
------

## ● 🧩 Diagrama de flujo simplificado

![WhatsApp Image 2025-12-06 at 11 01 37 AM](https://github.com/user-attachments/assets/fdac1fd5-cc22-46f0-8f1b-381b00f11069)

--------

## 💻🛒 Código en Java: Registro de compra


```java
import java.util.Scanner;

public class precio{
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        // Declaracion de variables
        String producto;
        double cantidad, precio;
        double totalGeneral = 0;
        int numProductos;   // número de productos

        System.out.println("---- REGISTRO DE COMPRA ----");

        // Pedir número de productos
        do {
            System.out.print("¿Cuántos productos va a comprar el cliente ? ");
            numProductos = entrada.nextInt();

            if (numProductos <= 0) {
                System.out.println("Error: el número de productos debe ser mayor que cero");
            }
        } while (numProductos <= 0);

        // Ciclo for para registrar cada producto
        for (int i = 1; i <= numProductos; i++) {
            System.out.println("\nProducto " + i + ":");

            // Nombre
            System.out.print("Ingrese el nombre del producto: ");
            producto = entrada.next();

            // Cantidad
            do {
                System.out.print("Ingrese la cantidad a comprar: ");
                cantidad = entrada.nextDouble();
                if (cantidad <= 0) {
                    System.out.println("La cantidad ingresada no es válida; debe ser mayor que cero.");
                }
            } while (cantidad <= 0);

            // Precio
            do {
                System.out.print("Ingrese el precio unitario: ");
                precio = entrada.nextDouble();
                if (precio <= 0) {
                    System.out.println("El precio ingresado no es válido; debe ser mayor que cero");
                }
            } while (precio <= 0);

            // Subtotal
            double subtotal = cantidad * precio;
            totalGeneral += subtotal;

            System.out.printf("Subtotal por %s: $%.2f\n", producto, subtotal);
        }

        // Total
        System.out.println("\n---- TOTAL DE LA COMPRA ----");
        System.out.printf("Total a pagar: $%.2f\n", totalGeneral);

        // Pago
        System.out.print("Ingrese el monto de dinero con el que el cliente realizará el pago: ");
        double pago = entrada.nextDouble();

        if (pago < totalGeneral) {
            System.out.printf("Dinero insuficiente. Faltan: $%.2f\n", (totalGeneral - pago));
        } else {
            double cambio = pago - totalGeneral;
            System.out.printf("Pago aceptado. El cambio del cliente es: $%.2f\n", cambio);
        }
    }
}

```

-----
## ✅ Verificación
🖥️⚙️ Cómo compilar y ejecutar el programa en Java

Para ejecutar el programa  **desde la terminal**, segui estos pasos:
📝 **Guarde el archivo con el nombre exacto:**
   
 ✔️ Asegúrate de que el nombre del archivo coincida con el nombre de la clase pública.
En este caso, la clase es:
```java
public class precio
```

🏗️ Compilar el programa usando:

```javac precio.java```

✔️ Si no aparece ningún error, la compilación fue exitosa.

▶️ Ejecutar el programa con:

```java precio```

🎉 El programa se ejecutará en la terminal y se ingresa los datos que se desee.


<img width="403" height="376" alt="image" src="https://github.com/user-attachments/assets/60eaeb0f-bf80-4eeb-8158-a0af3e857076" />

----------

[Presione aqui para volver a la unidad](unidad2.md)

