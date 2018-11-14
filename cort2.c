

#include <stdio.h>
#include <stdlib.h>


int main() {

    int tam;
    
   printf("ingrese un tamano\n");
   scanf("%d",&tam);
   
    int vector[tam];
   
    int i,*p;
    
    
    p=vector;
      
     
     
     for(i=0;i<tam;i++){
        printf("ingrese un Numero\n");
          scanf("%d n/",&p[i]);
     }
    
     for(i=0;i<tam;i++){
        printf("Valor: %i \n",*p++);

     }
       for(i=0;i<tam;i++){
        printf("Espacio de Memoria: %i \n",p++);

     }
      
    return 0;
}

