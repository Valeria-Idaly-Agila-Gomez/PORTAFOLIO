#include <stdio.h>

void calcularValorRecaudado(int clientes, double *totalRecaudado);
void calcularValorCliente(double *totalRecaudado);

int main() {
    int clientes;

    do {
        printf("Ingrese la cantidad de clientes a atender: ");
        scanf("%d", &clientes);

        if (clientes <= 0) {
            printf("Error: el número de clientes debe ser mayor que cero");
        }
    } while (clientes <= 0);

    double totalRecaudado = 0;

    calcularValorRecaudado(clientes, &totalRecaudado);

    printf("Total recaudado: $%.2f", totalRecaudado);

    return 0;
}

void calcularValorRecaudado(int clientes, double *totalRecaudado) {
    for (int i = 1; i <= clientes; i++) {
        printf("Cliente %d", i);
        calcularValorCliente(totalRecaudado);
    }
}

void calcularValorCliente(double *totalRecaudado) {
    int tipoConsola, horas;
    float PLAYSTATION =2.5,XBOX =2.0,NINTENDO =1.5;
    double precioHora, pagar;

    do {
        printf("Tipo de consola usada (1=PlayStation, 2=Xbox, 3=Nintendo): ");
        scanf("%d", &tipoConsola);

        if (tipoConsola < 1 || tipoConsola > 3) {
            printf("Error: Tipo de consola no válido");
        }
    } while (tipoConsola < 1 || tipoConsola > 3);

    // Validación de horas
    do {
        printf("Ingrese las horas de uso: ");
        scanf("%d", &horas);

        if (horas <= 0) {
            printf("Error: el número de horas debe ser mayor que cero");
        }
    } while (horas <= 0);

    // Asignación del precio por hora
    if (tipoConsola == 1) {
        precioHora = PLAYSTATION;
    } else if (tipoConsola == 2) {
        precioHora = XBOX;
    } else {
        precioHora = NINTENDO;
    }

    // Cálculo del pago
    pagar = precioHora * horas;
    *totalRecaudado += pagar;

    printf("Valor a pagar: $%.2f\n", pagar);
}


