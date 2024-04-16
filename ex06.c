#include <stdio.h>

int main()
{
    int numero;
    floatnumerovirgola;

    printf("Inserisci un numero\n");
    printf("Inserici un numero\n");
    scanf("%d", &numero);
    scanf("%f", &numerovirgola);
    printf("Il numero inserito è : %d", numero);
    printf("Il numero inserito è : %f", numerovirgola);
    printf("%d+%f=%f", numero, numerovirgola, numero+numerovirgola);
    printf("%d-%f=%f", numero, numerovirgola, numero-numerovirgola);
    printf("%d*%f=%f", numero, numerovirgola, numero*numerovirgola);
    printf("%d/%f=%f", numero, numerovirgola, numero/numerovirgola);
    
}