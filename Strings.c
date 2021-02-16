//首先请允许我表示对出题人的敬意，这道题无需太过高深的编程技巧，只需简单的数据类型使劲折腾便能写出解答
//由于种种原因，主要是写完不想动弹，一些地方我就不做优化了

#include<stdio.h>
#include<string.h>

struct Words{
	char word[20];
	char start;
	char end;
} words[5];
//一个后面没怎么用到的结构体数组，其实可以换成简单的数组形式存储

char WordChains[120][5][20];
//暴力美学的开始

void GetWord(void);
//获取输入五个字符串的函数

void ExChange(void);
//将五个字符串按字典序排列的函数

void PrintWord(void);
//校对函数，用来debug

void InputChains(int,int,int);
//你喜欢暴力美学吗？如果答案肯定，那么我告诉你，关键是一开始就猛踩油门

void ListAll(void);
//将五个字符串逐一排列的可能收纳

void fuckyourfamily(void);
void Fuck_AnSwer();
//得出结果的函数，光看函数名就知道我当时有多想结束这项工作了

int main(){
	
	GetWord();
	ExChange();
	ListAll();
	// PrintWord();
	fuckyourfamily();
	// PrintWord();
	Fuck_AnSwer();
	return 0;
			
}

void GetWord(void)
{
	
	int length;
    
    for(int i=0;i<5;i++)
    {
        scanf("%s",words[i].word);
        length = strlen(words[i].word)-1;
        words[i].start = words[i].word[0];
        words[i].end = words[i].word[length];
    }
}


void ExChange(void)
{
	int flag;
	char middle;

	for(int i=0;i<5;i++)
		for(int j=i+1;j<5;j++)
		{
			flag = strcmp(words[i].word,words[j].word);
			if(flag>0)
				for(int k=0;k<20;k++)
			{
				middle = words[i].word[k];
				words[i].word[k] = words[j].word[k];
				words[j].word[k] = middle;
			} 
		}
}

void PrintWord(void){
	for(int i=0;i<120;i++)
		printf("%s.%s.%s.%s.%s\n",WordChains[i][0],WordChains[i][1]
		,WordChains[i][2],WordChains[i][3],WordChains[i][4]);
}

void InputChains(int times, int rank, int i)
{
	for(int x=0;x<20;x++)
		{
			WordChains[times][rank][x]=words[i].word[x];
		}
}

void ListAll()
{
	int times=-1;
	for(int i=0;i<5;i++)
	for(int j=0;j<5;j++)
	for(int k=0;k<5;k++)
	for(int l=0;l<5;l++){
	if(i==j||i==k||i==l||j==k||j==l||k==l)
		continue;
	times++;
	InputChains(times,0,i);
	InputChains(times,1,j);
	InputChains(times,2,k);
	InputChains(times,3,l);
	InputChains(times,4,10-i-j-k-l);
	}
} 

void fuckyourfamily()
{
	int len1,len2,len3,len4;
	
	for(int i=0;i<120;i++)
	{
		
	len1 = strlen(WordChains[i][0])-1;
	len2 = strlen(WordChains[i][1])-1;
	len3 = strlen(WordChains[i][2])-1;
	len4 = strlen(WordChains[i][3])-1; 
	
	if(WordChains[i][0][len1]==WordChains[i][1][0]
	&& WordChains[i][1][len2]==WordChains[i][2][0]
	&& WordChains[i][2][len3]==WordChains[i][3][0]
	&& WordChains[i][3][len4]==WordChains[i][4][0])
		continue;
	else
		WordChains[i][0][0]='5';
	}	
}

void Fuck_AnSwer()
{
	int flag=1;
	for(int i=0;i<120;i++)
		if(WordChains[i][0][0]=='5')
			continue;
		else{
		printf("%s.%s.%s.%s.%s",WordChains[i][0],WordChains[i][1]
		,WordChains[i][2],WordChains[i][3],WordChains[i][4]);
		flag=0;
		break;}
	if(flag)
		printf("***");	
}
