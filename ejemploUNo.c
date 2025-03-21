#include <stdio.h>
int a=1;
int b;
int fun(){
    int c;
    c=a + b;
    printf( "%d \n",c);
}
int main(){
     printf("imprimime loco\n");
     fun();
     printf("desemprimime loco\n");
}