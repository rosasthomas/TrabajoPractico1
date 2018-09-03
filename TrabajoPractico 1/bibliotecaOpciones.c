
#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaOpciones.h"
#include "bibliotecaCalculos.h"

void opciones(void)
{
    int opcion;
    float numeroUno;
    float numeroDos;

    do
    {
        printf("1.Ingresar el primer operando.\n");
        printf("2.Ingresar el segundo operando.\n");
        printf("3.Calcular todas las operaciones.\n");
        printf("4.Informar resultados.\n");
        printf("5.Salir\n");
        printf("Ingrese una opcion: ");
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
            calcularTodo(numeroUno. numeroDos);

            break;
        case 4:

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

float calcularTodo(float numeroUno, float numeroDos)
{
            sumar(numeroUno, numeroDos);
            restar(numeroUno, numeroDos);
            dividir(numeroUno, numeroDos);
            multiplicar(numeroUno, numeroDos);
            factorial(numeroUno, numeroDos);
}
