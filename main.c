#include <stdio.h>

int main() {
    // Declaración de variables
    int duracionEnMinutos;
    float costoLlamadaUnMinuto = 45.48; //Variable constante
    float costeLlamadaTelefonica;
    char continuar; // Variable para preguntar si desea continuar

    printf("\t************************** Bienvenido **************************\n");
    printf("\t****************** Consulta llamada telefonica ******************\n");
    printf("El costo de la llamada por minuto es de $45.48\n");

    // Ciclo para consultar repetidamente
    while (1) {
        // Solicitud de ingreso por teclado de duración de llamada en minutos
        printf("Ingrese la duracion de la llamada en minutos: ");
        scanf("%d", &duracionEnMinutos);

        // Cálculo de costo de llamada telefónica
        costeLlamadaTelefonica = duracionEnMinutos * costoLlamadaUnMinuto;

        // Salida.
        printf("El costo de la llamada telefonica por minutos es de $%.2f pesos\n", costeLlamadaTelefonica);

        // Preguntamos si desea continuar
        printf(" \"s\" si desea seguir consultando, o \"n\", si desea salir (s/n): ");
        scanf(" %c", &continuar);

        if (continuar != 's' && continuar != 'S') {
            break; // Si no desea continuar, salimos del ciclo
        }
    }

    printf("Gracias\n");

    return 0;
}

