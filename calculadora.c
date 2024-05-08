#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num1, num2, soma, sub, div, multi;
    
    printf("Caluladora do 1.0 \n");
    printf("entre os 2 numeros a serem processados \n");
    scanf("%i%i", &num1, &num2);
    
    soma = num1 + num2;
    sub = num1 - num2;
    div = num1 / num2;
    multi = num1 * num2;

    printf( "A soma e:  %i\n", soma);
    printf( "A sbutração e; %i \n", sub);
    printf( "A divisao é; %i\n", div);
    printf( "A multiplicao é: %i\n", multi);
    
    return 0;
}
