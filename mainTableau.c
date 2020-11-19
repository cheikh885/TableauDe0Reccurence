#include<stdio.h>
#include "tableau.h"


int main(){
    int T[50], i=0, j=0, N;

    printf(" Entrez le nombre des éléments dans le tableau : ");
   scanf("%d", &N);
 
   printf(" Entrez les %d éléments :\n", N);
 
   for (i = 0; i < N; i++)
      scanf("%d", &T[i]);

    
    printf("entez %d valeurs compris entre 2 a 50 \n",N);
    
    
  
   /* for(i=0 ; i<6 ; i++){
  scanf("%d",&T[i]);
  while (T[i]!=0){
  
    printf("les valeurs sont %d\n",T[i]);break;
  }
  
 }*/
supprimer0Recurrence(T,N);

return 0;
} 