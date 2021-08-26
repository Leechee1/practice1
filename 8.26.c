

#include <stdio.h>

int main()
{    int number=0;
    int n=0;
    int t=0;   //次数
    printf("请一次输入一个数字，若要结束输入，请以数字-1结束");
    do
    {scanf("%d",&n);

        n++;
        number+=n;
    }while (number!=-1);

    printf("您输入所有数字的平均数为：%f",1.0*number/t);

    return 0;
}
