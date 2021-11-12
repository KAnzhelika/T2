#include <stdio.h>
int main(void)
{
   int a = 0;
   int b = 0;
   
   printf("A : ");
   scanf ("%i", &a);
     do
  {
    printf("B : ");
   scanf ("%i", &b);
  }
  while (b <= a);
   
   int n;
    for  (n = a; n <= b;  n++)
        printf("%i\n", n);
    printf("N: %i\n", b-a+1);
 
    return 0;
}
