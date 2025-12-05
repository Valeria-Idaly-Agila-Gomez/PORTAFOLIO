## Ejercicio: Combinando estructuras condicionales y repetitivas (Java)

Este ejercicio consiste en aplicar tanto **estructuras condicionales** (`if`, `else`) como **estructuras repetitivas** (`for`, `while`, `do…while`) en un mismo programa en Java, para resolver un problema específico.

## Descripción del problema

El programa tiene como objetivo registrar la compra de varios productos, calculando el subtotal de cada uno y el total general a pagar.  
Para cada producto, el usuario debe ingresar su nombre, la cantidad a comprar y el precio unitario.  
El programa valida que tanto la cantidad como el precio sean valores positivos para evitar datos incorrectos.

Después de ingresar cada producto, el usuario puede decidir si desea añadir otro más.  
Al finalizar el registro, el programa muestra el total de la compra y solicita el monto con el que el cliente va a pagar.  
Luego verifica si el dinero ingresado es suficiente; si no lo es, informa cuánto falta, y si es suficiente, calcula y muestra el cambio correspondiente.
## ● Diagrama de flujo simplificado

## Código en Java: Registro de compra 

```java
import java.util.Scanner;

public class precioproductos {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        String producto;
        double cantidad, precio;
        double totalGeneral = 0;
        int opcion;

        System.out.println("---- REGISTRO DE COMPRA ----");

        do {
            System.out.print("\nIngrese el nombre del producto: ");
            producto = entrada.next();

            // Cantidad
            do {
                System.out.print("Ingrese la cantidad a comprar: ");
                cantidad = entrada.nextDouble();
                if (cantidad <= 0) {
                    System.out.println("La cantidad debe ser positiva.");
                }
            } while (cantidad <= 0);

            // Precio
            do {
                System.out.print("Ingrese el precio unitario: ");
                precio = entrada.nextDouble();
                if (precio <= 0) {
                    System.out.println("El precio debe ser positivo.");
                }
            } while (precio <= 0);

            double subtotal = cantidad * precio;
            totalGeneral += subtotal;

            System.out.printf("Subtotal por %s: $%.2f\n", producto, subtotal);

            System.out.print("¿Desea ingresar otro producto? (1 = sí / 0 = no): ");
            opcion = entrada.nextInt();

        } while (opcion == 1);

        System.out.println("\n---- TOTAL DE LA COMPRA ----");
        System.out.printf("Total a pagar: $%.2f\n", totalGeneral);

        // Pago
        System.out.print("Ingrese con cuánto va a pagar: ");
        double pago = entrada.nextDouble();

        if (pago < totalGeneral) {
            System.out.printf("Dinero insuficiente. Faltan: $%.2f\n", (totalGeneral - pago));
        } else {
            double cambio = pago - totalGeneral;
            System.out.printf("Pago aceptado. Su cambio es: $%.2f\n", cambio);
        }
    }
}
```


