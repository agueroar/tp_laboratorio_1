#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

#define C 5




typedef struct
{
    char nombre[40];
    int edad;
    int dni;
    int estado;

} ePer;

int main()
{
    ePer datos[C]= {0,0,0,0};
    int opcion=0;
    char seguir='s';
    int validar;
    int flag;
    int i;
    int j;
    char respuesta;
    char auxString[100];
    int auxInt;
    int auxDni;
    int menorA18=0;
    int E19a35=0;
    int mayorA35=0;
    int mayor;

    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            flag=0;
            for(i=0; i<C; i++)
            {
                if(datos[i].estado==0)
                {
                    printf("Ingrese nombre: ");
                    fflush(stdin);
                    gets(datos[i].nombre);

                    datos[i].nombre[0]=toupper(datos[i].nombre[0]);

                    validar=validarcadena(datos[i].nombre);
                    if(validar!=0)
                    {
                        printf("Ingrese un nombre valido\n");
                        gets(datos[i].nombre);
                    }

                    printf("Ingrese Edad: ");
                    scanf("%d",&datos[i].edad);
                    if(datos[i].edad<menorA18)
                    {
                        menorA18++;
                    }
                        else if(datos[i].edad>18&&datos[i].edad<35)
                        {
                            E19a35++;
                        }

                        else{
                            mayorA35++;
                            }
                    printf("Ingrese DNI: ");
                    scanf("%d",&datos[i].dni);
                    datos[i].estado=1;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("No hay espacio!");
            }
            break;

        case 2:
            flag=0;
            printf("Ingrese DNI del nombre a eliminar: ");
            scanf("%d", &auxDni);

            for(i=0; i<C; i++)
            {
                if(datos[i].estado==1&&auxDni==datos[i].dni)
                {
                    printf("%s--%d--%d\n", datos[i].nombre,datos[i].edad,datos[i].dni);

                    printf("Esta seguro de eliminar el cliente? s/n: \n");
                    respuesta = getche();

                    if(respuesta=='s')
                    {
                        printf("Se elimino de la base a %s--%d--%d\n", datos[i].nombre,datos[i].edad,datos[i].dni);
                        datos[i].estado = 0;

                    }
                    else
                    {
                        printf("Accion cancelada!");
                    }
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("DNI inexistente");
                break;
            }
            break;

        case 3:
            for(i=0; i<C-1; i++)
            {
                for(j=i+1; j<C; j++)
                {
                    if(datos[i].estado==1 && datos[j].estado==1)
                    {
                        if(strcmp(datos[i].nombre,datos[j].nombre)>0)
                        {
                            strcpy(auxString, datos[i].nombre);
                            strcpy(datos[i].nombre, datos[j].nombre);
                            strcpy(datos[j].nombre,auxString);

                            auxInt = datos[i].edad;
                            datos[i].edad = datos[j].edad;
                            datos[j].edad = auxInt;

                            auxInt = datos[i].dni;
                            datos[i].dni = datos[j].dni;
                            datos[j].dni = auxInt;

                            auxInt = datos[i].estado;
                            datos[i].estado = datos[j].estado;
                            datos[j].estado = auxInt;
                        }
                    }
                }
            }
            printf("\tNombre\tEdad\tDNI\n");
            for(i=0; i<C; i++)
            {
                if(datos[i].estado==1)
                {
                    printf("\t%s\t%d\t%d\n", datos[i].nombre,datos[i].edad,datos[i].dni);
                }
            }
            break;

        case 4:

            if(menorA18 >= E19a35 && menorA18 >= mayorA35)
            {
                mayor = menorA18;
            }
            else
            {
                if(E19a35 >= menorA18 && E19a35 >= mayorA35)
                {
                    mayor = E19a35;
                }
                else
                {
                    mayor = mayorA35;
                }
            }
            for(i=mayor; i>0; i--)
            {

                if(i<= menorA18)
                {
                    printf("*");
                }
                if(i<= E19a35)
                {
                    flag=1;
                    printf("\t*");
                }
                if(i<= mayorA35)
                    {
                    if(flag==0)
                        printf("\t\t*");
                    if(flag==1)
                        printf("\t*");

                    }
                printf("\n");
            }
            printf("\n  |<18\t19-35\t>35");
            break;

        case 5:
            seguir = 'n';
            break;
        }
    }

    return 0;
}



