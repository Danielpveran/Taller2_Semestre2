#include <stdio.h>

int main() {
    int Opcion, Saldo = 1000;
    float Agregar, Retirar;

    while (1) {
        printf("\nBienvenido a su Cajero\n");
        printf("1. Ingreso en la cuenta\n");
        printf("2. Retirar\n");
        printf("3. Salir\n");
        printf("4. Ver Saldo actual\n");
        scanf("%i", &Opcion);

        switch (Opcion) {
            case 1:
                printf("\nCuánto desea ingresar en cuenta? ");
                scanf("%f", &Agregar);
                Saldo += Agregar;
                printf("Su Saldo total es de: %.2f\n", Saldo);
                break;

            case 2:
                printf("Cuánto desea retirar? ");
                scanf("%f", &Retirar);

                if (Retirar > Saldo) {
                    printf("Saldo Insuficiente. Su saldo actual es de: %.2f\n", Saldo);
                } else {
                    Saldo -= Retirar;
                    printf("El Saldo disponible es de: %.2f\n", Saldo);
                }
                break;

            case 3:
                // Salir del programa
                return 0;

            case 4:
                printf("Su Saldo total es de: %.2f\n", Saldo);
                break;

            default:
                printf("Ingrese una opción válida\n");
                break;
        }
    }

    return 0;
}
