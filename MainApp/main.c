#include <stdio.h>
#include "silnia.h"
int main (){
int number;
printf("Podaj liczbe do wyznaczenia silni\n");
scanf("%d", &number);

printf("Silnia z liczby %d wynosi %d \n", number , silnia(number));


}
