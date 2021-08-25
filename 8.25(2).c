//
//  8.c
//  practice
//
//  Created by 李志远 on 2021/8/25.
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{       srand(time(0));
    int b=0;

    int a=rand()%100+1;
  scanf("%d",&b);

    if(a>b){
        
        printf("对不起，你输入的数小了");
    }
    else if (a<b){
        
        printf("你输入的数大了");
        
    }else if (a==b){
        printf("恭喜你，你答对了！！");
    }
    
    return 0;
    
}
