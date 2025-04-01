#include <xinu.h>

void snch(char);

void programa_Dos(void){
    resume (create(snch, 1024, 20,"send A ", 1, 'A'));
    resume (create(snch, 1024, 20,"send B ", 1, 'B'));
} 

void snch(char ch){
    while (1)
       putc(CONSOLE, ch);
} 