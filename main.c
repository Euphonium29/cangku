#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int tian,week=0,day=0;
    scanf("%d",&tian);
    week=tian/7;
    day=tian%7;
    printf("为%d周%d天",week,day);
    return 0;
}
