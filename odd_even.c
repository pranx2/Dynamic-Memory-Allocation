#include<stdio.h>
#include<stdlib.h>
   int main (){
      int *odd ;

      odd = (int *) malloc (5* sizeof(int)); //extra adding 5 spaces;
      odd [0] = 1 ;
      odd [1] = 3 ;
      odd [2] = 5 ;
      odd [3] = 7 ;
      odd [4] = 9 ;
      printf("Odd number is (5):");
      for (int i = 0; i < 5 ;  i++)
      {
            printf("%d\t",odd[i]);
      }
      odd = realloc (odd , 6); //Extra adding 6 spaces ;
      odd [0] = 2 ;
      odd [1] = 4 ;
      odd [2] = 6 ;
      odd [3] = 8 ;
      odd [4] = 10;
      odd [5] = 12;
         printf("\nEven Number is(6):");
         for (int i = 0 ; i < 6;   i++)
         {
               printf("%d\t",odd[i]);   
         }
         free(odd);
      return 0 ;   
   }