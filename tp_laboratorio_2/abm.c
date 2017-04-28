#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>


/**
*\brief Recibe una cadena de caracteres, maximo 50 y valida que solo contenga letras.
*\param j recibe mediante la funcion strlen la cantidad de caracteres de la cadena.
*\param la funcion isalpha determina que sea una lentra cuando la cadena recibida en la posicion "i" sea distinta de 0.
*\return Devuelve la validacion de que sea una letra.
*/

int validarcadena(char cadena [50])
{
    int i=0;
    int validar=0;
    int j;
    j=strlen(cadena);

    while(i<j&&validar==0)
        if(isalpha(cadena[i])!=0)
        {
            i++;
        }
        else
        {
            validar=1;
        }

    return validar;

}
