#include <stdio.h>

int fibo(int pos);
int isPartOfFibo(int num);

int main() {
    int input;
    printf("Digite um numero: ");
    scanf("%d", &input);
    
    int isPart = isPartOfFibo(input);
    printf("O numero faz parte da sequencia de Fibonacci? %s", isPart == 1 ? "Sim" : "Nao");
}

int isPartOfFibo(int num) {
    int aux;
    for(int i=0; (aux=fibo(i)) < num; i++);
    return aux == num;
}

int fibo(int pos) {
    if(pos <= 1) {
        return pos;
    } else {
        return fibo(pos - 1) + fibo(pos - 2);
    }
}