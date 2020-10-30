#include <stdio.h>
#include<math.h>
int main(void)
{
int i;
float Sum=0;
for (i=1;i<=100;i++)
Sum = Sum + pow(i,2); 
printf("Sum of 1 squares to 100 squares is %f\n",Sum);
return 0;
}