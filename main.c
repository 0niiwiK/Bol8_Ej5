/* Israel Sanchez Fuentes
Realizar una función que dado n devuelva el valor de f(n): f(n)=(1! + 2! + 3! + ..... n!) / n
 */

int factorialN(int n);
int pideNumero();
float sumatorioFactoriales(int n);
#include <stdio.h>

int main() {
    int num=pideNumero();
    float resultado= sumatorioFactoriales(num);
    printf("El resultado de f(n)=((1! + 2! + 3! + ..... n!) / n) Para n=%d es: %f",num,resultado);
    return 0;
}

int pideNumero(){
    int num;
    printf("\nIntroduce un valor entero positivo: ");
    scanf("%d",&num);
    fflush(stdin);
    while (num<=0){
        printf("El numero debe ser positivo y no nulo");
        printf("\nIntroduce un valor entero positivo: ");
        scanf("%d",&num);
        fflush(stdin);
    }
    return num;
}

int factorialN(int n){
    int resul=1;
    for (int i = n; i > 0 ; i--) {
        resul*=i;
    }
    return resul;
}

float sumatorioFactoriales(int n){
    int sumatorio=0;
    for (int i = 1; i <= n ; ++i) {
        sumatorio+=factorialN(i);
    }
    return (float)sumatorio/(float)n;
}