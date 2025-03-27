/*
10. 
   (utilice como soporte la sección "3.3. Operaciones con distintos tipos" 
    del PDF taller-c.pdf)

10.c ¿Cuál es el resultado del siguiente fragmento de código? Anticipe su 
    respuesta en base a lo dicho en esta unidad y luego confírmela mediante 
    un programa.

    printf("%d\n", 20/3);
    printf("%f\n", 20/3);
    printf("%f\n", 20/3.);
    printf("%d\n", 10%3);
    printf("%d\n", 3.1416);
    printf("%f\n", (double)20/3);
    printf("%f\n", (int)3.1416);
    printf("%d\n", (int)3.1416);
    TENGO DUDAS TODAVIA
*/
#include <stdio.h>
int main(){
    
    printf("%d\n", 20/3);//0.000000 porque es div entera
    printf("%f\n", 20/3);//6.666667 div float
    printf("%f\n", 20/3.);//1 completa porque "3."
    printf("%d\n", 10%3);//da modulo 1
    printf("%d\n", 3.1416);//da 3 por division entera
    printf("%f\n", (double)20/3);//
    printf("%f\n", (int)3.1416);// muestra 3
    printf("%d\n", (int)3.1416);//muestra 3
    return 0;
}