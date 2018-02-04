#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

#define cls printf("\033[H\033[2J")

int main() {
   
  
   
   int i = 0;
   int iMax = 10;
   
   do
   {
   if(i >= 7) break;
   printf("Sto contando... %d\n" , i);
   i++;
   usleep(500000);
   cls;
   }
   while(i < iMax);
   
   printf("Ho contato %d/%d", i, iMax);
   return 0;
   
   }
