#include <stdio.h>

int ehPrimo(int num){
    int i, divisores = 0;
    for(i = 1; i <= num; i++){
        if(num%i == 0){
            divisores++;
        }
    }
    
    if(divisores == 2){
        return 1;//é primo
    }
    return 0;//Não é primo
}

int main(){
    int i;
    printf("Numeros primos de 1 a 100:\n");
    for (i = 0; i <= 100; i++){
        if(ehPrimo(i) == 1){
            printf("%d ", i);
        }
    }
    return 0;
}
