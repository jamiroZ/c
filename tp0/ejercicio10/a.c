/*
10. 
   (utilice como soporte la sección "3.3. Operaciones con distintos tipos" 
    del PDF taller-c.pdf)
10.a ¿Qué hace falta corregir para que la variable r contenga la división 
    exacta de a y b?

    int a, b;
    float r;
    a = 5;
    b = 2;
    r = a / b;		
*/
#include <stdio.h>
int main(){
    int a, b;
    float r;
    a= 5;
    b= 2;
    //el problema de truncamiento se produce en la evaluacion derecha de la asignacion
    //para recuperar el valor correcto,hay que hace alguno de los 2 operandos sea float
    //yo uso la forma explisita 
    r=(float)a/b;
    printf("La b %d \n", b);
    printf("La a %d \n", a);
    printf("La r %f \n", r);
    return 0;
}