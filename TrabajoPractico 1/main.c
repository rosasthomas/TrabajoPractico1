#include <stdio.h>
#include <stdlib.h>

float pedirNumeroUno(void);
float pedirNumeroDos(void);
void sumar(float, float);
void restar(float, float);
void dividir(float, float);
void multiplicar(float, float);

void opciones(float, float);

int main()
{
    float numeroUno;
    float numeroDos;

    numeroUno = pedirNumeroUno();
    numeroDos = pedirNumeroDos();

    opciones(numeroUno, numeroDos);

    return 0;
}

float pedirNumeroUno(void)
{
    float numeroUno;

    printf("Ingrese el primer numero: ");
    scanf("%f", &numeroUno);

    return numeroUno;
}

float pedirNumeroDos(void)
{
    float numeroDos;

    printf("Ingrese el segundo numero: ");
    scanf("%f", &numeroDos);

    return numeroDos;
}

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

void opciones(float numeroUno, float numeroDos)
{
    int opcion;
    do
    {
        printf("1.Sumar\n");
        printf("2.Restar\n");
        printf("3.Dividir\n");
        printf("4.Multiplicar\n");
        printf("5.Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            sumar(numeroUno, numeroDos);
            break;
        case 2:
            restar(numeroUno, numeroDos);
            break;
        case 3:
            dividir(numeroUno, numeroDos);
            break;
        case 4:
            multiplicar(numeroUno, numeroDos);
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
