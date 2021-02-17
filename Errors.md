

在c语言中,只能在对结构体和数组声明时通过初始化进行整体赋值
下例编译后会报错:

```C
// Structure
int main()
{
	struct student{
	char number[20];
	char name[20];
	int score[10];
	} student1;
	student1 = {"201941301436","xiaoming",98};
	return 0;
}

int main()
{
	struct student{
	char number[20];
	char name[20];
	int score[10];
	};
	struct student student1 = {"201941301436","xiaoming",98};//正确
	student1 = {"201941301436","xiaoxie",99}//错误
	return 0;
}

// Array

int main()
{
	int number1[10];
	int number2[10];
	number1[10] = {1,2,3,4,5,6};
	number2 = {1,2,3,4};
	return 0;
}

```
初始化后的数组或结构体,无论赋值与否,其标识符具有类似指针的特性
初始化赋值与声明后赋值是不同的