
#include <stdio.h>
#include "bibliotecaCalculos.h"

float sumar(float numeroUno, float numeroDos)
{
    float suma;

    suma = numeroUno + numeroDos;

    return suma;
}

float restar(float numeroUno, float numeroDos)
{
    float resta;

    resta = numeroUno - numeroDos;

    return resta;
}

float dividir(float numeroUno, float numeroDos)
{
    float dividir;

    dividir = numeroUno / numeroDos;

    return dividir;
}

float multiplicar(float numeroUno, float numeroDos)
{
    float multiplicar;

    multiplicar = numeroUno * numeroDos;

    return multiplicar;

}

float factorial(float numero)
{
    int i;
    long long int resultado = 1;

    for(i = numero; i >= 1; i--)
    {
        resultado = resultado * i;
    }
    return resultado;
}

void calcularTodo(float numeroUno, float numeroDos, float *suma, float *resta, float *division, float *multiplicacion, float *factorialUno, float *factorialDos)
{

    *suma = sumar(numeroUno, numeroDos);
    *resta = restar(numeroUno, numeroDos);
    *division = dividir(numeroUno, numeroDos);
    *multiplicacion = multiplicar(numeroUno, numeroDos);
    if(numeroUno == 0)
    {
        *factorialUno = 1;
    }
    else
    {
        *factorialUno = factorial(numeroUno);
    }

    if(numeroDos == 0)
    {
        *factorialDos = 1;
    }
    else
    {
        *factorialDos = factorial(numeroDos);
    }
}

void mostrarResultados(float suma, float resta, float dividir, float multiplicar, float factorialUno, float factorialDos, int divisionPorCero, int factorialNegativoUno, int factorialNegativoDos)
{
    printf("\n\nRESULTADOS: \n");

    printf("\nLa suma es: %.2f\n", suma);
    printf("La resta es: %.2f\n", resta);
    if(divisionPorCero == 0)
    {
        printf("La division es: %.2f\n", dividir);
    }
    else
    {
        printf("No se puede dividir un operando por 0\n");
    }

    printf("La multiplicacion es: %.2f\n", multiplicar);

    if(factorialNegativoUno == 0)
    {
        printf("El factorial del primer operando es: %.2f\n", factorialUno);
    }
    else
    {
        printf("No se puede factorizar por un numero negativo.\n");
    }
    if(factorialNegativoDos == 0)
    {
        printf("El factorial del segundo operando es: %.2f\n", factorialDos);
    }
    else
    {
        printf("No se puede factorizar por un numero negativo.\n");
    }
}

void comprobarDivisionPorCero(int *divisionPorCero, float numeroDos)
{
    if(numeroDos == 0)
    {
        *divisionPorCero = 1;
    }
    else
    {
        *divisionPorCero = 0;
    }
}

void comprobarFactorialNegativo(int *factorialNegativoUno, int *factorialNegativoDos, float numeroUno, float numeroDos)
{
    if (numeroUno < 0)
    {
        *factorialNegativoUno = 1;
    }
    else
    {
        *factorialNegativoUno = 0;
    }
    if (numeroDos < 0)
    {
        *factorialNegativoDos = 1;
    }
    else
    {
        *factorialNegativoDos = 0;
    }
}
