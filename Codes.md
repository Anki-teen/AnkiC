```
/* 
 一对兔子，从出生后第3个月起每个月都生一对兔子
 小兔子长到第3个月后每个月又生一对兔子。
 假如兔子都不死，请问第1个月出生的一对兔子，
 至少需要繁衍到第几个月时兔子总数才可以达到N对？
 输入在一行中给出一个不超过10000的正整数N
 在一行中输出兔子总数达到N最少需要的月月数
*/ 

#include<stdio.h>
int main(){
    int a=0,b=1,mid;
    int number,month=1,total=1;
    scanf("%d",&number);
    while(total<number){
        total+=a;
        mid = a;
        a = b;
        b += mid;
        month++;}
    printf("%d",month);
    return 0;
}
```





```
/* 
每天消费1元，每消费K元就可以获赠1元.有M元，最多可以用多少天？
每个测试实例包括2个整数M，K（2<=k<=M<=1000)
*/ 

#include<stdio.h>
int main()
{
	int M,K;
    int sum=0;
	scanf("%d %d",&M,&K);
	sum = M;
    do{
        sum += M/K;
        M = M/K;
    }while(M/K>=K);
    printf("%d",sum);
    return 0;
}
```





```
/* 
根据年月日得出星期几的算法
*/

#include<stdio.h>

int dayofweek(int y, int m, int d)/*0=Sunday*/
{
    static int t[] = {0,3,2,5,0,3,5,1,4,6,2,4,};
    y -= m<3;
    return (y+y/4-y/100+y/400+t[m-1]+d)%7;
}

int main(){
	int year,month, data;
	scanf("%d %d %d",&year,&month,&data);
    printf("是星期%d",dayofweek(year,month,data));
    return 0;
}
```





```
/*
提供形如 x+xx+xxx+...的算术式 
*/ 

#include<stdio.h>
int main()
{
	int a,b,c,d;
	a=0;
	scanf("%d",&b);
	d=b;
	scanf("%d",&c);
	c--;
	printf("Sn=");
while(c--)
{

printf("%d+",b);
b=b*10+d;
a=a+b;
}
printf("%d=%d",b,a);
return 0;
}
```





```
/*
 利用函数递归调用解决 Hanoi塔的问题
*/

 #include<stdio.h>

void move(int n,int x,int y,int z);

int main()
{
 	int h;
	printf("\ninput number:\n");
	scanf("%d",&h);
	printf("the step to moving %2d diskes:\n",h);
	move(h,'a','b','c');
	
	return 0; 

}

void move(int n,int x,int y,int z)
{
 	if(n==1)printf("%c-->%c\n",x,z);
 	else
 	{
 		move(n-1,x,z,y);
 		printf("%c-->%c\n",x,z);
 		move(n-1,y,x,z);
	}
}
```



