#include <stdio.h>
#include <stdlib.h> /* para las funciones system y exit */

int principal() {

	int c;

	/* Decirle al sistema que el modo input es RAW */
	sistema ("/bin/stty raw");

	whi(1) {
		printf("\r ");
		printf("\rc = %c ingrese una letra (0 para salir): ", c);
		c = obtenerchar();

		si (c == '0')
			romper;
	}

	sistem ("/bin/stty sane borrar ^H");
}