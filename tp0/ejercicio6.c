/*****************************************************************************
¿Cuál es el valor en base 2 (binario) de i, j, k?
   carácter i = 'a';
   carácter j = 77;
   carácter k = 0x4D;
*******************************************************************************/

#include <stdio.h>
void imprimirBinario(unsigned char caracter) {
    printf("\n");
    for (int i = 7; i >= 0; i--) { // Un char tiene 8 bits
        printf("%d", (caracter >> i) & 1); // Desplazamiento y enmascaramiento
    }
    printf("\n");
}
int main() {/**/
    
    char i='a';
    char j=77;
    char k= 0x4D;
    /*j y k son equivalentes en la tabla ascii*/
    /*valor numerico de los caracteres*/
    printf("%i \n",i);
    printf("%i \n",j);
    printf("%i \n",k);
    //combierto a entero los caracteres
    printf("El carácter en binario es: ");
    imprimirBinario(i);
    imprimirBinario(j);
    imprimirBinario(k);
    return 0;
}