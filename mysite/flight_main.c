#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char  path[50] = "D:/work/vs/";

void play1();
void play2();
/// @brief 
/// @return 
int main()
{
	char TextBuf1[20],TextBuf2[50];
	play1();
	scanf("%s",&TextBuf1);
	getchar();
	if(strcmp(&TextBuf1,"1") == 0)
	{
		system("cls");
		play2();
		FILE *fp;
		//scanf("%s",&TextBuf2);
		gets(TextBuf2);
		strcat(path,strcat(TextBuf2,".txt"));
		fp = fopen(path,"a+");
		if(fp == NULL)
		{
			printf("创建文件失败");
			goto BJ1;
		}
		fclose(fp);
	}
    system("pause");
BJ1:	return 0;
}

void play1()
{
	printf("*******************************************************************************\n\n");
	printf("\t\t\t\t请选择要创建的文件类型：\n");
	printf("\t\t\t\t\t1：文本文档（*.txt）\n");
	printf("\n\n*******************************************************************************");
}
void play2()
{
	printf("*******************************************************************************\n\n");
	printf("\t\t\t\t请输入创建的文件名：\n");
	// printf("\t\t\t\t\t1：文本文档（*.txt）");
	printf("\n\n*******************************************************************************");
}
void test(void)
{
    //test code
}