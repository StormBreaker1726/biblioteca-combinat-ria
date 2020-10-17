//
// Created by jvict on 2020-10-16.
//

#ifndef ANALISE_COMBINATORIA_COMBINATORIA_H
#define ANALISE_COMBINATORIA_COMBINATORIA_H


#define euler 2.718281828459
#include <math.h>
#include <stdio.h>


void div(void){
    for (int i = 0; i < 48; ++i) {
        printf("-");
    }
}

int fat(int number){
    int i;

    for(i = 1; number > 1; number = number -1){
        i = i * number;
    }

    return i;
}

void roundm(float number){
    if (number - floor(number) < 0.5){
        printf("\n%.f\n", floor(number));
    }
    else
    if (number - floor(number) > 0.5){
        printf("\n%.f\n", floor(number) + 1);
    }
}

void permutsim(int n){
    int result;
    result = fat(n);
    div();
    printf("\nO n%cmero de permuta%co%cs %c: %d \n", 163, 135, 137, 130, result);
    div();

}
void combsim(int p, int n){
    int result;
    result = (fat(n)) / ((fat(p)) * fat(n - p));
    div();
    printf("\nO n%cmero de combina%co%cs %c: %d \n", 163, 135, 137, 130,result);
    div();
}

void desarranj(int n){
    float result = (n/euler);
    div();
    roundm(result);
    div();
}

void combwrep(int n, int p){
    int result;
    int new_n;
    new_n = n + p - 1;
    result = ((fat(new_n))/((fat(p))*(fat(new_n - p))));
    div();
    printf("\nO n%cmero de combina%co%cs completas %c: %d \n", 163, 135, 137, 130,result);
    div();
}

#endif //ANALISE_COMBINATORIA_COMBINATORIA_H
