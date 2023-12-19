#include <stdio.h>

void media(){
    int n[3];
    n[0] = 1;
    n[1] = 3;
    n[2] = 5;
    int soma;

    soma = n[0] + n[1] + n[2];
    float media = soma / 3;

    printf("A media dos vetores eh %.2f", media);
}

int main(){
    media();
}