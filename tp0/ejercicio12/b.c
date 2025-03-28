/*
12.b Complete el código ahorcado.c usando printf() y getchar(), para 
    desarrollar el juego del ahorcado.
*/
#include <stdio.h>
#include <stdlib.h>	/* para las funciones system y exit */
#include <string.h>
int main() {

	int c,cont,iguales;
    cont=0;
    iguales=0;
    char palabra[] = "hola";
    int longitud=strlen(palabra);
    char check[longitud];

    printf("%s\n", check);
    printf("%s\n", palabra);
    
	/* Decirle al sistema que el modo input es RAW */
	system ("/bin/stty raw");

	while(cont< 5 || iguales==longitud) {

        for (int i = 0; i <= longitud; i++) {
             if(palabra[i] == check[i]) {
               iguales++;
             } 
        }

		printf("\r c = %c  ingrese una letra (0 para salir): ", c);
		c = getchar();
        int pos=0;
        while(palabra[pos] != '0' && cont <= 5){//compara letra por letra hasta /0 o acabaron los intentos
            
            if(palabra[pos]==c){
                check[pos]=c;//coloco en la misma posicion c
                break;//termino bucle
            }else{
                cont++;//uso un intento
            }
            pos++;
        }
        printf("\n");
        printf("%s\n", check);
		if (cont==5){
            printf("acabaste con el limite de intentos");

        }else if(iguales==longitud){
            printf("palabra encontra");
        }
	}

	system ("/bin/stty sane erase ^H");
}