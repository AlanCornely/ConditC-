#include <iostream>

int main () {

    float x, y;

    printf("Plano Cartesiano\n\n");
    printf("digite um numero y:");
    scanf("%f", &y);
    printf("digite um numero x:");
    scanf("%f", &x);
    
    if( x > 0 && y > 0){
        printf(" está no quadrante 1\n");
    } else if (x < 0 && y > 0){
        printf(" está no quadrante 2\n");
    } else if ( x < 0 && y < 0) {
        printf(" está no quadrante 3\n");
    } else if ( x > 0 && y < 0){
        printf(" está no quadrante 4\n");
    }
return 0;
}