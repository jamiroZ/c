#include <stdio.h>
int main() {
    /**/
    char i='Ç';
    unsigned char j='Ç';
    printf("%i \n",i);
    printf("%x \n",i);
    printf("%c \n",i);

    printf("%i\n",j);
    printf("%x \n",j);
    printf("%c \n",i);
    return 0;
}