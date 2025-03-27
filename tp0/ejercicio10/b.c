/*
10. 
   (utilice como soporte la sección "3.3. Operaciones con distintos tipos" 
    del PDF taller-c.pdf)

10.b ¿Qué resultado puede esperarse del siguiente fragmento de código?

    int a, b, c, d;
    a = 1;
    b = 2;
    c = a / b;
    d = a / c;
*/
#include <stdio.h>
int main(){
     int a, b, c, d;
    a = 1;
    b = 2;
    printf("La b %d \n", b);
    printf("La a %d \n", a);
    c = a / b;//esto da 0.5 se trunca el resultado a 0 por division entera
    d = a / c;//1/0 "ERROR" 
    
    printf("La c %d \n", c);
    printf("La d %d \n", d);
    return 0;
}