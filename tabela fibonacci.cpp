#include <stdio.h>

int main()
{

 int a, n1=0, n2=1, n3;
 	printf("1, ");
    n3 = n1 + n2;

    for (a = 1; a < 9; ++a)
    {
     printf("%d, ", n3);
     
	n1 = n2;
     n2 = n3;
     n3 = n1 + n2;
    }
   printf("%d", n3);
   
 
   return 0;
}