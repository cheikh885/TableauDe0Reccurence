#include<stdio.h>
#include "tableau.h"


int main(){
    int T[50], i=0, j=0, N;
    char c;
do{

    printf(" Entrez le nombre des éléments dans le tableau: ");
   scanf("%d",&N);
   while((c=getchar() != '\n' && c !=EOF ));
}while(N<=1  || N>=50);


printf(" Entrez les %d éléments :\n", N);
 printf("les %d valeurs du tableau compris entre 2 a 50 sont :\n ",N);
   for (i = 0; i < N; i++)
   do{
        scanf("%d", &T[i]);
    
   }while(c=getchar() != '\n' && c !=EOF);
supprimer0Recurrence(T,N);
//PositiveNegative(T,N);

return 0;
} 