#include <xinu.h>


void ahorcado() {
    int c, cont, iguales;
    cont = 0;
    iguales = 0;
    char palabra[] = "peliculas";  // Palabra a adivinar
    int longitud = strlen(palabra); // Longitud de la palabra
    char check[longitud + 1];  // Palabra vacía, con espacio para el carácter nulo

    // Creo la cadena para rellenar
    for (int i = 0; i < longitud; i++) {
        if (i == (longitud / 2)) {  // Coloca una letra en la mitad de la cadena
            check[i] = palabra[i];
        } else {  // Relleno con _
            check[i] = '_';
        }
    }
    check[longitud] = '\0';  // Caracter nulo al final de la palabra

    printf("\n%s\n", check);//muestro la palabra incompleta
    printf("\n%s\n", palabra);//muestro la palabra completa

    /* Decirle al sistema que el modo input es RAW */
    control(CONSOLE,TC_MODER,0,0);
    int cantIntentos = 10;//cantidad de intentos 

    while (cont < cantIntentos && iguales < longitud) {  // repite hasta que se completo la palabra o se acabaron los intentos
        iguales = 0;  // Reseteo de iguales para la siguiente iteración
        printf("\rIngrese una letra (0 para salir): ");
        c = getchar();  

        if (c == '0') {// Si el usuario ingresa '0', se sale del juego
            printf("\nSaliendo del juego.\n");
            break; 
        }

        int bandera = 0;
        // Comparar cada letra de la palabra con el input
        for (int pos = 0; pos < longitud; pos++) {
            if (palabra[pos] == c && check[pos] != c) {  // Si la letra es correcta
                check[pos] = c;  // Coloca la letra
                bandera = 1;
            }
        }

        if (!bandera) {  // Si no se encontró la letra en la palabra
            cont++;  // Usar un intento
        }

        // cuántas letras han fueron descubiertas 
        iguales = 0;
        for (int i = 0; i < longitud; i++) {
            if (check[i] == palabra[i]) {
                iguales++;
            }
        }
        // muestra la palabra actual 
        printf("\n%s\n", check);
        
        if (cont == cantIntentos) {//se quedo sin intentos
            printf("\nHas agotado el límite de intentos\n");
            break;
        } else if (iguales == longitud) {//obtuvo la palabra
            printf("\nPalabra encontrada\n");
            break;
        }
    }
    control(CONSOLE, TC_MODEC,0,0);
    
}