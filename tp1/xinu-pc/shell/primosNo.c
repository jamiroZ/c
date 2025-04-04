#include <xinu.h>
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
void primos(void){
    int pid;
    pid=create(es_Primo,2048,20,"process 1",2,5000,10000);
    resume(pid);

    sleep(15);
    printf("Proceso padre. Mi hijo es pid=%d \n ",pid);
    es_Primo(1,5000);
    kill(pid);//finaliza el proceso hijo     
    exit();//finaliza al proceso padre
    
} 
