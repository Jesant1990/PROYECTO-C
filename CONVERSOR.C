#include <stdio.h>

float convertirGTQaUSD(float cantidad) {

    const float tasaCambioGTQaUSD = 0.13;
    return cantidad * tasaCambioGTQaUSD;
}


float convertirUSDaGTQ(float cantidad) {

    const float tasaCambioUSDaGTQ = 7.75;
    return cantidad * tasaCambioUSDaGTQ;
}


float convertirEURaUSD(float cantidad) {

    const float tasaCambioEURaUSD = 1.18;
    return cantidad * tasaCambioEURaUSD;
}


float convertirUSDaEUR(float cantidad) {

    const float tasaCambioUSDaEUR = 0.85;
    return cantidad * tasaCambioUSDaEUR;
}

int main() {
    int opcion;
    float cantidad;

    printf("Conversor de Monedas\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Dólares a Quetzales\n");
    printf("3. Euros a Dólares\n");
    printf("4. Dólares a Euros\n");
    printf("Ingrese el número de la opción: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    switch (opcion) {
        case 1:
            printf("%.2f GTQ son %.2f USD\n", cantidad, convertirGTQaUSD(cantidad));
            break;
        case 2:
            printf("%.2f USD son %.2f GTQ\n", cantidad, convertirUSDaGTQ(cantidad));
            break;
        case 3:
            printf("%.2f EUR son %.2f USD\n", cantidad, convertirEURaUSD(cantidad));
            break;
        case 4:
            printf("%.2f USD son %.2f EUR\n", cantidad, convertirUSDaEUR(cantidad));
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}
