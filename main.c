#include <stdio.h>

int main() {
    //Declaracion de variables
    int duracionEnMinutos; //Definido como dato entero
    float costoLlamadaUnMinuto = 45.48;
    float costeLlamadaTelefonica;

    printf("\t ************** Binvenido **************\n");
    printf("\t ******Consulta llamada telefonica ******\n");
    printf("El costo de la llamada por minuto es de $45.48 \n");


    //Solicitud de ingreso por teclado de duracion de llamada en minutos
    printf("Ingrese la duracion de la llamada en minutos: ");
    scanf("%d", &duracionEnMinutos);

    //Procedimiento. Calculo de costo de llamada telefonica
    costeLlamadaTelefonica = duracionEnMinutos*costoLlamadaUnMinuto;

    //Salida.
    printf("\nEl costo de la llamada telefonica por minutos es de $ %.2f pesos",costeLlamadaTelefonica);

    return 0;
}
