#include <xinu.h>

void sndch(char);

void programa_C(void) {
    int pidA, pidB;//
    pidA = create(sndch, 1024, 20, "send A", 1, 'A');
    pidB = create(sndch, 1024, 20, "send B", 1, 'B');
    resume(pidA);
    resume(pidB);

    //espera 10 segundos
    sleep(10);
    //finaliza procesos
    kill(pidA);
    kill(pidB);
} 
    void sndch(char ch){
        printf("Proceso hijo %d\n", getpid());
        while(1)
            putc(CONSOLE, ch);
    }
  