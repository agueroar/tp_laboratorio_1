
/**
*\brief Recibe el valor de dos variables y calcula la suma de las mismas.
*\param x Es el dato utilizado para hacer el calculo.
*\param y Es el dato utilizado para hacer el calculo.
*\return Devuelve el resultado de la suma
*/
float sumar(float x, float y)
{
float resultado;
resultado=x+y;
return resultado;
}

/**
*\brief Recibe el valor de dos variables y calcula la resta de las mismas.
*\param x Es el dato utilizado para hacer el calculo.
*\param y Es el dato utilizado para hacer el calculo.
*\return Devuelve el resultado de la resta.
*/

float restar (float x,float y)
{
 float resultado;
resultado=x-y;
return resultado;
}
/**
*\brief Recibe el valor de dos variables y calcula la división de las mismas.
*\param x Es el dato utilizado para hacer el calculo.
*\param y Es el dato utilizado para hacer el calculo.
*\return Devuelve el resultado de la division.
*/

float dividir (float x,float y)
{
float resultado;
resultado=x/y;
return resultado;
}

/**
*\brief Recibe el valor de dos variables y calcula la multiplicación de las mismas.
*\param x Es el dato utilizado para hacer el calculo.
*\param y Es el dato utilizado para hacer el calculo.
*\return Devuelve el resultado de la multiplicacion.
*/

float multiplicacion (float x,float y)
{
 float resultado;
resultado=x*y;
return resultado;
}

/**
*\brief Recibe el valor de una variable y devuelve el resultado de la misma.
*\param Itinera con el valor ingresado en la variable a.
*\param Calcula y resuelve el valor a.
*\return Devuelve el resultado.
*/

int factorial(int a)
{
int i;
int aux;
aux=1;

for(i=1;i<=a;i++)
    {
        aux=aux*i;
    }
    return aux;
}
