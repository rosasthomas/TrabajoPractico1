#include <stdio.h>
#include "BibliotecaCalculos.h"

void sumar(float numeroUno, float numeroDos)
{
    float suma;

    suma = numeroUno + numeroDos;

    printf("La suma es: %.2f\n", suma);
}

void restar(float numeroUno, float numeroDos)
{
    float resta;

    resta = numeroUno - numeroDos;

    printf("La resta es: %.2f\n", resta);
}

void dividir(float numeroUno, float numeroDos)
{
    float dividir;
    if(numeroDos == 0)
    {
        printf("No es posible dividir por 0 \n");
    }
    else
    {
        dividir = numeroUno / numeroDos;
        printf("La division es: %.2f\n", dividir);
    }
}

void multiplicar(float numeroUno, float numeroDos)
{
    float multiplicar;

    multiplicar = numeroUno * numeroDos;

    printf("La multiplicacion es: %.2f\n", multiplicar);
}

void factorial(float numeroUno, float numeroDos)
{
    float factorial;

    factorial =
}
