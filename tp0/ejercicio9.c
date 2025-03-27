/*
9. Prepare un programa con una variable de tipo char y otra de tipo unsigned 
    char. Inicialice ambas variables con los valores máximos de cada tipo, 
    para comprobar el resultado de incrementarlas en una unidad. 
    Imprima los valores de cada variable antes y después del incremento.
    (Nota: vea la sección "3.2. Tamaños de los objetos de datos" 
     de taller-c.pdf.)
*/
#include <stdio.h>
#include <limits.h>  // Para usar CHAR_MAX y UCHAR_MAX
int main(){
    char charVar = CHAR_MAX;          // Máximo valor para char (generalmente 127 en sistemas de 8 bits)
    unsigned char ucharVar = UCHAR_MAX; // Máximo valor para unsigned char (255)

    printf("Valores antes del incremento:\n");
    printf("charVar = %d\n", charVar);
    printf("ucharVar = %u\n", ucharVar);

    // Incremento de ambas variables
     charVar++;
    ucharVar++;

    printf("\nValores después del incremento:\n");
     printf("charVar = %d\n", charVar);    // Puede volverse negativo (desbordamiento)
    printf("ucharVar = %u\n", ucharVar);  // Volverá a 0 (desbordamiento circular)
    /*
    char i = 0xFF;
    unsigned char j=0xFF;
    printf("%i \n",i);
    printf("%x \n",i);
    printf("%c \n",i);
    printf("%i \n",j);
    printf("%x \n",j);
    printf("%c \n",j);
    */
    return 0;
}