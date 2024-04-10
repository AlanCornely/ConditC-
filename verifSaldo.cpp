#include <iostream>

int main () {

    float saldo = 100000;
    float retirar;

    printf("digite o valor a ser retirado:");
    scanf("%f", &retirar);

    if ( retirar <= saldo){
        printf("o valor será retirado da sua conta.\n");
    } else if (retirar > saldo){
        printf(" o valor excede o seu saldo.\n");
    }
return 0;
}