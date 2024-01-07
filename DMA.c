#include<stdio.h>
#include<stdlib.h>

   int main (){
      int *ptr ;
      ptr = (int *) malloc(5*sizeof(int));
      //int * is the malloc DMA file type ; 5 is  size of data , sizeof(int)-> which  data memory size;
         ptr[0] = 1;
         ptr[1] = 3;
         ptr[2] = 5;
         ptr[3] = 7;
         ptr[4] = 9;
         printf("Malloc Numbers are : \t");
         for (int i = 0; i < 5; i++)
         {
            
            printf("%d\t",ptr[i]);
         }
        
        free(ptr);//Free memory space;
         //continuous location; by default 0 stored;
          printf("calloc Numbers are :\t");
         ptr = (int *) calloc(5,sizeof(int));
             for (int i = 0; i < 5; i++)
         {
            
            printf("%d\t",ptr[i]);
         }
         free(ptr);

         //realloc;
         ptr = (int *) calloc(5 , sizeof(int));
         printf("\nEnter the DMA number(5):\n");
            for (int i = 0; i < 5 ; i++)
            {
               scanf("%d",&ptr[i]);
            }
            
         ptr = realloc (ptr , 8);
         printf("\nEnter the DMA number(8):\n");
            for (int i = 0; i < 8; i++)
            {
               scanf("%d",&ptr[i]);
            }
            
            for (int i = 0; i < 8 ; i++)
            {
             printf("The number of %d is = %d\n", i , ptr[i]);
            }
               //1->1, 2->2 , 3->3;
               //4->4, 5->5 , 6->6;
               
         return 0 ;
   }
