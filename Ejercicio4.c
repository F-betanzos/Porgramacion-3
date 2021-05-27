/*Dep3_Prog4:
Verificar si es par e impar*/
#include <stdio.h>

int main ()
{

    char letra;
    printf("\n Introduce la letra");
    scanf("%c", &letra);

    if ( (letra == 'a' || letra == 'A') || 
         (letra == 'e' || letra == 'E') || 
         (letra == 'i' || letra == 'I') || 
         (letra == 'o' || letra == 'O') || 
         (letra == 'u' || letra == 'U')  )
    {
        printf("\n Es una VOCAL");
    }
    else
    {
        printf("\n No es una VOCAL");
    }

    return 0;
}

