
#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaOpciones.h"
#include "bibliotecaCalculos.h"

void opciones(void)
{
    int opcion;
    float numeroUno;
    float numeroDos;
    float suma;
    float resta;
    float division;
    float multiplicar;
    float factorialUno;
    float factorialDos;

    printf("CALCULADORA\n\n");
    do
    {
        printf("\n1.Ingresar el primer operando.\n");
        printf("2.Ingresar el segundo operando.\n");
        printf("3.Calcular todas las operaciones.\n");
        printf("4.Informar resultados.\n");
        printf("5.Salir\n");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            numeroUno = pedirNumero("Ingrese el primer operando: ");
            break;
        case 2:
            numeroDos = pedirNumero("Ingrese el segundo operando: ");
            break;
        case 3:
            calcularTodo(numeroUno, numeroDos, &suma, &resta, &division, &multiplicar, &factorialUno, &factorialDos);
            break;
        case 4:
            system("pause");
            system("cls");
            printf("El primer numero es: %.2f\n", numeroUno);
            printf("El segundo numero es: %.2f\n", numeroDos);
            mostrarResultados(suma, resta, division, multiplicar, factorialUno, factorialDos);
            break;
        case 5:
            opcion = 5;
            break;
        default:
            printf("No ingreso una opcion correcta");
        }
        system("pause");
        system("cls");
        printf("El primer numero es: %.2f\n", numeroUno);
        printf("El segundo numero es: %.2f\n", numeroDos);
    }
    while(opcion != 5);
}

float pedirNumero(char texto[])
{
    float numero;

    printf("%s", texto);
    scanf("%f", &numero);

    return numero;
}
