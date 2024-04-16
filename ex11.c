#include <stdio.h>

int main()
{
    float=num1;
    float mnum2=273.15;
    float num3=32.00;
    float num4=1.8;
    printf("Inserisci un numero\n");
    scanf("%f",&num1);
    if(num1<0)
    {
        printf("Errore");
    }
    
    else{
    printf("Il numero inserito è: %f", num1);
    printf("%f+%f=%f", num1, num2, num1+num2);
    printf("%f*%f+%f=%f", num4, num1, num3, num4*num1+num3);
    }
}