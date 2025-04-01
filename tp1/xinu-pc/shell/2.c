#include <xinu.h> 
void sndA(void), sndB(void);

void programa_Uno(void){
    //crea 2 procesos concurrentes con "create()"
    //tamaño=1024 bytes
    //prioridad 20
    //nombre process 1 y 2
    //numero de argumentos 1
    //caracter a imprimir A y B
   resume(create(sndA, 1024, 20, "process 1", 0));
   resume(create(sndB, 1024, 20, "process 2", 0));
} 
void sndA(void){
     while(1){
         putc(CONSOLE, 'A');
     } 
} 
void sndB(void){
     while(1){
         putc(CONSOLE, 'B');
     } 
} 