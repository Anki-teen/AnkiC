```c
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


/* 
 一对兔子，从出生后第3个月起每个月都生一对兔子
 小兔子长到第3个月后每个月又生一对兔子。
 假如兔子都不死，请问第1个月出生的一对兔子，
 繁衍到每个月时兔子总数为多少?
*/

//可用斐波那契数列完成解答,但为何每月兔子总数为斐波那契数列?
```





```c
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





```c
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





```c
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



```c
/*
将一个正整数分解成质因数
*/

#include<stdio.h>
int main()
{
	int number,i;
	printf("请输入整数:");
	scanf("%d",&number);
	printf("%d=",number);
	for(i=2;i<=n;i++)
	{
		while(n%i==0)
		{
			printf("%d",i);
			n /= i;
		    if(n!=1)
		    	printf("*");
		}
	}
	printf("\n");
	
	return 0;
}

```



```c
/*
求最大公约数和最小公倍数
*/

#include<stdio.h>
int main()
{
	int a,b,t,r;
	printf("请输入两个数字:\n");
	scanf("%d %d",&a,&b);
	if(a < b)
	{
		t = b;
		b = a;
		a = t;
	}
	r = a % b;
	int n = a * b;
    while(r!=0)
    {
    	a = b;
    	b = r;
    	r = a % b;
    }
    printf("最大公约数为 %d \最大公倍数为 %d\n", b, n/b);
    
    return 0;
}
```



```c
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



```c
/*
利用函数递归将输入的五个字符用相反顺序打印
*/

#include<stdio.h>
int main()
{
	int i = 5;
	void palin(int);
	printf("请输入五个字符\40:\40");
	palin(i);
	printf("\n");
	
	return 0;
}

void palin(int n)
{
	char next;
    if(n<=1)
    {
    	next = getchar();
    	printf("相反顺序输出结果\40:\40");
    	putchar(next);
    }
    else
    {
    	next = getchar();
    	palin(n-1);
    	putchar(next);
    }
}

/*
字符串反转
*/

#include<stdio.h>

void reverse(char *);

int main()
{
    char string[] = "www.runoob.com";
    printf("'%s' => ",string);
    reverse(string);
    printf("'%s'\n",string);
    
    return 0;
}

void reverse(char *s)
{
    int len = 0;
    char *p = s;
    while(*p != 0)
    {
        len++;
        p++;
    }
    int i = 0;
    char c;
    while(i <= len/2-1)
    {
        c = *(s+i);
        *(s+i) = *(s+len-i-1);
        *(s+len-i-1) = c;
        i++;
    }
}
```





```c
/*
任一偶数可成两个素数之和
*/

#include<stdio.h>
#include<stdlib.h>

int Isprimer(unsigned int n);

int main()

{

    unsigned int n,i;

    do{

        printf("请输入一个偶数:\n");

        scanf("%d",&n);

    }while(n%2!=0);

    for(i=1;i<n;i++)

        if(Isprimer(i)&&Isprimer(n-i))

            break;

    printf("偶数%d可以分解成%d和%d两个素数的和\n",n,i,n-i);

    

    return 0;

}

int Isprimer(unsigned int n)

{

    int i;

    if(n<4)return 1;

    else if(n%2==0)return 0;

    else

        for(i=3;i<sqrt(n)+1;i++)

            if(n%i==0)return 0;

    

    return 1;

}
```

