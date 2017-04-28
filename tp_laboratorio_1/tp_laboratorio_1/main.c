#include <stdio.h>
#include <stdlib.h>
#include "tp_laboratorio_1.h"


int main()
{
    int opcion;
    float resultado;
    float a,b;
    int fact=(int)a;

    while(opcion!=7)
    {

        printf("ELIJA UNA OPCION\n\n");
        printf("Primer operador ingresado (A=%.2f)\n",a);
        printf("Segundo operador ingresado (B=%.2f)\n",b);
        printf("Digite 1 para sumar (A+B)\n");
        printf("Digite 2 para restar (A-B)\n");
        printf("Digite 3 para dividir (A/B)\n");
        printf("Digite 4 para multiplicar (A*B)\n");
        printf("Digite 5 para calcular el factorial de (!A)\n");
        printf("Digite 6 para calcular todas las operaciones\n");
        printf("Digite 7 para salir:\n");
        scanf("%d",&opcion);
        system("cls");


        if(opcion==5)
        {
            printf("Ingresar el primer operador\n");
            scanf("%f",&a);
        }
        else
        {
            if(opcion>0&&opcion<7)
            {
                printf("Ingresar el primer operador\n");
                scanf("%f",&a);
                printf("Ingresar el segundo operador\n");
                scanf("%f",&b);
            }
        }

        switch(opcion)
        {

        case 1:
            resultado=sumar (a,b);
            printf("El resultado de la suma entre %.2f y %.2f es: %.2f.\n\n", a, b,resultado);
            break;
        case 2:
            resultado=restar (a,b);
            printf("El resultado de la resta entre %.2f y %.2f es: %.2f.\n\n", a, b, resultado);
            break;
        case 3:
            if(b==0)
            {
                printf("Error, no se puede dividir por 0.\n\n");
            }
            else
            {
                resultado=dividir (a,b);
                printf("El resultado de la division entre %.2f y %.2f es: %.2f.\n\n", a, b, resultado);
            }
            break;
        case 4:
            resultado=multiplicacion(a,b);
            printf("El resultado de la multiplicacion entre %.2f y %.2f es: %.2f.\n\n", a, b, resultado);
            break;
        case 5:
            if(a<=0)
            {
                printf("Error, ingrese un numero mayor a cero para calcular el factorial.\n\n");
            }
            else
            {
                fact=factorial(a);
                printf("El factorial de %.f es: %d.\n\n",a,fact);
            }
            break;
        case 6:
            printf("El resultado de la suma es: %.2f.\n",sumar (a,b));
            printf("El resultado de la resta es: %.2f.\n",restar (a,b));
            if(b==0)
            {
                printf("Error, no se puede dividir por 0.\n");
            }
            else
            {
                printf("El resultado de la division es: %.2f.\n", dividir (a,b));
            }
            printf("El resultado de la multiplicacion es: %.2f.\n", multiplicacion(a,b));
            if(a<=0)
            {
                printf("Error, ingrese un numero mayor a cero para calcular el factorial.\n\n");
            }
            else
            {
                fact=factorial(a);
                printf("El factorial de %.f es: %d.\n\n",a,fact);
            }

            break;
        case 7:
            break;
        default:
            printf("Error, ingrese una opcion correcta.\n\n");
            break;

        }

    }


    return 0;
}


