#include <iostream>

int main () {

    float h, p;

    printf("digite seu peso:");
    scanf("%f", &p);    
    printf("digite sua altura:");
    scanf("%f", &h);

    float imc = p / (h * h);

    if (imc < 18.5){
        printf("categoria: abaixo do peso\n500");
    } else if (imc >= 18.5 && imc < 25){
        printf("categoria: peso normal\n");
    } else if (imc <= 25 && imc <30){
        printf("categoria: sobre peso\n");
    } else if (imc <= 30 && imc > 40){
        printf("categoria: obeso\n");
    } else {
        printf("categoria: Thais Carla\n");
    }

return 0;
}