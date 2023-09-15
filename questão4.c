#include <stdio.h>

int somatorio(int num){
    int res = 0, i;
    for(i = 1; i <= num; i++){
        res += i;
    }
    return res;
}

int expressao(int num){
    return (num*(num+1))/2;
}

int main(){
    int num;
    printf("Informe um numero natural: ");
    scanf("%d", &num);
    
    int soma = somatorio(num);
    int expr = expressao(num);
    
    printf("Somatorio de 1 a %d = %d\n", num, soma);
    printf("Expressao (%d*%d)/2 = %d", num, num+1, expr);
}
