#include <stdio.h>
#include "tableau.h"
void supprimer0Recurrence(int T[], int N){

int j=0, i=0,p,n;
int TPOS[50], TNEG[50];// declaration du tableau des valeurs positives et negatives
T[j]=T[i];
for ( i = 0; i < N; i++)
{
    T[j]=T[i];
    if (T[i]!=0)
    {
        j++;
    }
  
}
 N=j;
printf("les valeurs du tableau sont\n");
 for ( j = 0; j < N; j++)
 {
   printf("%d  ",T[j]);
 }

 printf("\n");
 printf("l'inverse du tableau est\n");

        for ( i = N-1; i >=0; i--)
        {
          printf("%d ",T[i]);
        }

for (i = 0; i < N; i++)
{
          if(T[i]>0){
          TPOS[p]=T[i];
          p++;
        }else
        {
            TNEG[n]=T[i];
            n++;
          } 

}
 printf("\n");

  printf("les nbrs positifs sont:\n");     
for( i = 0; i < p; i++)
{
  printf("%d ",TPOS[i]);
}

 printf("\n");

    printf("les nbrs negatifs sont:\n");
for( i = 0; i < n; i++)
{  
  printf("%d ",TNEG[i]);

}
printf("\n");
printf("les nbrs divisibles par 2 sont:\n");

for ( i = 0; i < N; i++){
  if ((T[i]%2)==0)
  {
    printf("%d\t",T[i]);
  }
  
}printf("\n");




 }