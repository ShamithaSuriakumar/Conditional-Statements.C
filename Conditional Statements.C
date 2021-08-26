#include<stdio.h>
int main()
{
   int mark;
   printf("BIT ELEMENTARY SCHOOL");
   printf("\nenter your mark:");
   scanf("%d",&mark);
   printf("%s",mark>85?"Grade A":(mark>70?"Grade B":(mark>55?"Grade C":(mark>40?"Grade D":"Grade F"))));
   return 0;	
}
