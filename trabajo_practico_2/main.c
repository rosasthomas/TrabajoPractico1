#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaGetsYComprobaciones.h"
#include "arrayEmployees.h"

int main()
{
    sEmployee listEmployees[LEN_EMP];
    int choice;
    int isError;
    int isErrorAdd;
    int isErrorModify;
    int isErrorRemove;
    int flagIsCharged = 0;
    do
    {
        isError = initEmployees(listEmployees, LEN_EMP);
    }while(isError == -1);

    do
    {
        choice = getIntOnly(" Nomina de empleados.\n\n1. Dar de alta un empleado. \n2. Modificar datos de un empleado. \n3. Dar de baja un empleado. \n"
                            "4. Informes. \n5. Salir. \nIngrese una opcion: ");

        switch(choice)
        {
            case 1: //Alta
                isErrorAdd = addEmployee(listEmployees);
                if(isErrorAdd == 0)
                {
                    flagIsCharged = 1;
                    system("cls");
                    printf("\nSe cargo correctamente.\n");
                }
                else
                {
                    system("cls");
                    printf("\n No se ha podido cargar el empleado.\n");
                }
                break;
            case 2: //Modificar
                if(flagIsCharged != 1)
                {
                    system("cls");
                    printf("\n\nAun no se han cargado empleados.\n");
                    break;
                }
                isErrorModify = modifyEmployee(listEmployees);
                if(isErrorModify == 0)
                {
                    system("cls");
                    printf("\nSe modifico correctamente.\n");
                }
                else
                {
                    system("cls");
                    printf("\n No se ha podido modificar el empleado.\n");
                }
                break;
            case 3: //Baja
                if(flagIsCharged != 1)
                {
                    system("cls");
                    printf("\n\nAun no se han cargado empleados.\n");
                    break;
                }
               isErrorRemove = removeEmployee(listEmployees, LEN_EMP);
               if(isErrorRemove == 0)
                {
                    system("cls");
                    printf("\nSe dio de baja correctamente.\n");
                }
                else
                {
                    system("cls");
                    printf("\n No se ha podido dar de baja al empleado.\n");
                }
                break;
            case 4: //Informar
                if(flagIsCharged != 1)
                {
                    system("cls");
                    printf("\n\nAun no se han cargado empleados.\n");
                    break;
                }
                infoMenu(listEmployees, LEN_EMP);
                break;
            case 5:
                choice = 5;
                break;
            default:
                system("cls");
                printf("No es una opcion valida.");
        }
        system("pause");
        system("cls");
    }
    while(choice != 5);
    return 0;
}
