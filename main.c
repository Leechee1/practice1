//
//  main.c
//  practice
//
//  Created by 李志远 on 2021/8/23.
//






#include <stdio.h>
//找零钱
//
//int main()
//{    int change = 0;
//     int price = 0;
//    //变量需要提前说明
//
//    printf("hello");
//
//
//    scanf("%d",&price);
//
//     change =100-price;
//
//    printf("%d",change);
//    return 0;
    
//}


//int main ()
//{
//    int h1,h2;
//    int m1,m2;
//    int t1,t2;
//    printf("请分别输入时和分");
//    scanf("%d %d ",&h1 ,&m1);
//    scanf("%d %d",&h2 ,&m2);
//
//    t1=h2-h1;
//    t2=m2-m1;
//
//    printf("时差%d 分差%d",t1,t2);
//
//
//
//
//
//
//    return 0;
//}

//int main(){
//
//    int a,b=0;
//
//    scanf("%d %d",&a,&b);
//
//    int c=a+b;
//
//    printf("a+b=%d",c);
//
//    return 0;
//
//
//}
//int main()
//
//{
//    int a;
//    int n=1;
//    scanf("%d",&a);
//
//    while(a>10)
//    {a/=10;
//        n++;
//
//    }
//    printf("%d",n);
//
//
//    return 0;
//}



//int main()
//{
//
//    int  ;
//    int t=0;
//    scanf("%d",&x);
//    do{
//        t++;
//        x/=10;
//
//    }while(x>0);
//
//    printf("%d",t);
//
//    return 0;
//}



int main()
{    int number=0;
    int n=0;
    int t=0;   //次数
    printf("请一次输入一个数字，最后一个数字以-1结束");
    do
    {scanf("%d",&n);

        n++;
        number+=n;
    }while (number!=-1);
    
    printf("您输入所有数字的平均数为：%f",1.0*number/t);
    
    return 0;
    
    
}
