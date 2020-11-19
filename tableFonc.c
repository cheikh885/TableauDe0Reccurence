#include <stdio.h>
#include "tableau.h"
void supprimer0Recurrence(int T[], int N){

int j=0, i=0;
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

 for ( j = 0; j < N; j++)
 {
   printf("%d\n",T[j]);
 }
 

       
        }