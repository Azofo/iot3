#include <stdio.h>

int main(void) {
    int opcion;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Mostrar Hola Mundo\n");
        printf("2. Salir\n");
        printf("Elige una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Hola Mundo\n");
                break;
            case 2:
                printf("Hasta luego\n");
                break;
            default:
                printf("Opcion no valida\n");
                break;
        }
    } while (opcion != 2);

    return 0;
}
