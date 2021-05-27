/*Dep3_Prog3:
Verificar si es par e impar*/
#include <stdio.h>

int main ()
{

    int numero;
    printf("\n Introduce el numero");
    scanf("%d", &numero);

    if( numero%2 == 0)
    {
        printf("\n El número es PAR");
    }
    else
    {
        printf("\n El número es IMPAR");
    }

    return 0;
}
