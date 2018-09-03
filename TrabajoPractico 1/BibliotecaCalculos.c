
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
    if(numeroDos == 0)
    {
        *division = 1111111111;
    }
    else
    {
    *division = dividir(numeroUno, numeroDos);
    }
    *multiplicacion = multiplicar(numeroUno, numeroDos);
    if(numeroUno == 0)
    {
        *factorialUno = 1;
    }else if(numeroUno < 0){
        *factorialUno = 0;
    }
    else
    {
        *factorialUno = factorial(numeroUno);
    }

    if(numeroDos == 0)
    {
        *factorialDos = 1;
    }else if(numeroDos < 0)
    {
        *factorialDos = 0;
    }
    else
    {
        *factorialDos = factorial(numeroDos);
    }
}

void mostrarResultados(float suma, float resta, float dividir, float multiplicar, float factorialUno, float factorialDos)
{
    printf("\n\nRESULTADOS: \n");
    printf("La suma es: %.2f\n", suma);
    printf("La resta es: %.2f\n", resta);
    printf("La division es: %.2f\n", dividir);
    printf("La multiplicacion es: %.2f\n", multiplicar);
    printf("El factorial del primer operando es: %.2f\n", factorialUno);
    printf("El factorial del segundo operando es: %.2f\n", factorialDos);
}
