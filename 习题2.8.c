#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num, o, zheng, fu, zhengsum, fusum;
    float zhengping, fuping;
    o=0, zheng=0, fu=0;
    for(i=1; i<=20; i++){
        printf("输入第%d个数:",i);
        scanf("%d", &num);
        if (num<0) fu=fu+1, fusum=fusum+num;
        if (num>0) zheng=zheng+1, zhengsum=zhengsum+num;
        if (num==0) o=o+1;
    }
    fuping=fusum/fu;
    zhengping=zhengsum/zheng;
    printf("共有%d个正数，%d个负数，%d个0，正数之和为%d，负数之和为%d，正数平均数为%.2f，负数平均数为%.2f", zheng, fu, o, zhengsum, fusum, zhengping, fuping);
    return 0;
}
