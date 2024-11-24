#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int alex, aleatorio;
    printf("Ingresa un numero");
    scanf("%d", &alex);
    aleatorio=rand() % 11;
    if(alex == aleatorio){
        printf("Has ganado");
    }else{
        printf("Has perdido, el numero era %d ", aleatorio);
    }
    return 0;
} // ANGEL