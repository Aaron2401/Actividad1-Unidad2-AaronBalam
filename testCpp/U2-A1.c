#include <stdio.h>

int main() {
    char *alimentos[] = {"Pizza", "Tacos", "Hamburguesa", "Refresco"};
    float precios[] = {100.0, 25.0, 50.0, 20.0};
    int cantidades[] = {0, 0, 0, 0};
    int opcion, cantidad;
    float total = 0;

    do {
        printf("Elige el alimento (0: Pizza, 1: Tacos, 2: Hamburguesa, 3: Refresco, -1 para terminar): ");
        scanf("%d", &opcion);
        if (opcion >= 0 && opcion < 4) {
            printf("Cantidad: ");
            scanf("%d", &cantidad);
            cantidades[opcion] += cantidad;
        }
    } while (opcion != -1);

    printf("Resumen de cuenta:\n");
    for (int i = 0; i < 4; i++) {
        if (cantidades[i] > 0) {
            float subtotal = cantidades[i] * precios[i];
            printf("%s - $%.2f x %d = $%.2f\n", alimentos[i], precios[i], cantidades[i], subtotal);
            total += subtotal;
        }
    }
    printf("Total a pagar: $%.2f\n", total);

    return 0;
}
