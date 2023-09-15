/*
Ao buscar as raízes de uma função de segundo grau, o coeficiente "a" deve ser diferente de zero por duas razões:
1- Caso fosse 0, haveria uma descaracterização da função, pois ela não seria mais do segundo grau;
2- A fórmula de bhaskara utiliza 2*a como denominador de uma fração, e divisão por 0 não está definida matematicamente.

E também b^2 - 4*a*c (vulgo discriminante) deve ser maior ou igual a zero, pelo fato de que ele é o radicando de uma
raiz quadrada, e raizes quadradas não tem resultados reais para valores menores que zero.
*/

#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    printf("Informe o primeiro coeficiente: ");
    scanf("%lf", &a);
    printf("Informe o segundo coeficiente: ");
    scanf("%lf", &b);
    printf("Informe o terceiro coeficiente: ");
    scanf("%lf", &c);
    
    double delta = pow(b, 2) - (4*a*c);

    if(a == 0){
        printf("O primeiro coeficiente deve ser diferente de zero");
    }
    else if(delta < 0){
        printf("O valor do discriminante resultou em um numero negativo,\n");
        printf("logo a funcao quadratica tem apenas resultados complexos.");
    }
    else {
        double r1 = ((b*(-1))+sqrt(delta))/2*a;
        double r2 = ((b*(-1))-sqrt(delta))/2*a;
        
        printf("As raizes do polinomio sao:\n");
        printf("R1: %lf e R2: %lf", r1, r2);
    }
}
