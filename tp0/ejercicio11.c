/*
11. Escribir un programa que multiplique e imprima 100000 * 100000. 
    ¿De qué tamaño son los ints en su sistema?
*/
#include <stdio.h>
int main(){
    int a;//enteros son 4bytes puede representar entre -2.147.483.648 y 2.147.483.647
    a= 100000 * 100000;//10.000.000.000 se pasa
      printf("%d\n", a);
    return 0;
}