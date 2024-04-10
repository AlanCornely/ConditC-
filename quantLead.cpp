#include <iostream>

int main () {

    int lead;
    printf("quantidade de leads:");
    scanf("%d", &lead);

    if (lead < 5){
        printf("a quantidade de leads é baixa\n");
    } else if (lead >=6 && lead <= 10){
        printf("a quantidade de leads é o esperado\n");
    } else if (lead >= 11){
        printf("a quantidade de leads é alta\n");
    }

return 0;
}