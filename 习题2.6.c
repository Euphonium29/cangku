#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, sum;
   sum=0,i=0;
   while (i<1000)
   {sum=i+sum;
       i=i+3;};
    printf("1000以内3的倍数的数之和为：%d",sum);
    return 0;
}
