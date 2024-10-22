#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,zhengmax,zhengmin,fumax,fumin,i;
    printf("请输入第1个数：");
    scanf("%d",&num);
    if (num>0)zhengmax=num,zhengmin=num,fumax=0,fumin=0;
    if(num<0)zhengmax=0,zhengmin=0,fumax=num,fumin=num;
    if(num==
       0)zhengmax=0,zhengmin=0,fumax=0,fumin=0;
    for(i=2;i<=20;i++)
    {printf("请输入第%d个数：",i);
    scanf("%d",&num);
    if(num>zhengmax)zhengmax=num;
    if(num<fumin)fumin=num;
    if(num==0)fumin=fumin;
    if(0<num&&num<zhengmin)zhengmin=num;
    if(0>num&&num>fumax)fumax=num;
    }
    printf("最大正整数为：%d，最小正整数为：%d，最大负整数为：%d，最小负整数为：%d",zhengmax,zhengmin,fumax,fumin);
    return 0;
}
