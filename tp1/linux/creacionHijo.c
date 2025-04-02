#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>//
#include <sys/types.h>
#include <signal.h>
void es_Primo(int min,int max) {
       for ( int i=min; i < max; i++)  {//se mueve en todo el rango buscando primos
           int primo=1;//asumimos que i es primo
           for(int j=2; j < i;j++){//compara de 2 hasta el numero i

               if(i%j==0){//si i es primo entonces que lo muestre
                  primo=0;//i no es primo
                  break;//no es necesario seguir buscando divisores
               }
           }
           if(primo && i >1){
               printf("%d",i);//imprime el numero primo
               printf("\n");//salto de linea
           }    
       } 
       printf("\n");//salto de linea
       
}
void main(void){
    int pid;
    int x=0;
    pid=fork();
    sleep(5);
    if(pid==0){
       printf("Proceso hijo %d\n ",getpid());
       es_Primo(1000,5000);
       
    }else{
       printf("Proceso padre. Mi hijo es pid=%d \n ",pid);
       es_Primo(0,1000);
       kill(pid,SIGKILL);//finaliza el proceso hijo
       
       exit(pid);//finaliza al proceso padre
    }

} 


