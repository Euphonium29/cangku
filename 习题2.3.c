#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int num, min, i;
    printf("输入第1个数：");
    scanf("%d", &num);
    min=num;
    for(i=2;i<=3;i++){
        printf("输入第%d个数:", i);
        scanf("%d", &num);
        if (num<min) min=num;
    }
    printf("最小数为：%d\n",min);
    return 0;
}
