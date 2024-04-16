#include <stdio.h>

int main()
{
 int a;
 int b;
 int c;
 printf("Inserisci tre numeri\n");
 scanf(" %d %d %d", &a &b &c);
 if(b+c>a && b+a>c && a+c>b)
 {
    printf("I numeri possono essere le lunghezze dei lati di un triangolo\n");
 }
    else
 {  
    printf("i numeri non possono essere le lunghezze dei lati di un triangolo\n");
 }
 if(a==b && b==c && a==c)
 {}