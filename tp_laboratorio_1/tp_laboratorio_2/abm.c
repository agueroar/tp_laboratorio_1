#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

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
