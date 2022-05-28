#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <string>
int main()
{
	char a[100]; //= "新建文本文档.txt";
	char b[10];
	scanf("%s %s", &b, &a);
	FILE* fp = fopen(a, "r");

	if (!fp) {
		printf("错误：文件读取失败\n");
		return -1;

	}

	//对参数进行判断

	if (!strcmp(b, "-c")) {//字符数
		char temp;
		int num = 0;
		temp = fgetc(fp);
		while (temp != EOF) {
			//putchar(temp);
			temp = fgetc(fp);
			num++;

		}
		printf("该文本文件的字符数为：%d\n", num);


	}
	else if (!strcmp(b, "-w")) {//单词数
		int w = 0;
		char a = fgetc(fp);
		while (a != EOF) {
			if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')) {
				while ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9'))
					a = fgetc(fp);
				w++;
				a = fgetc(fp);


			}
			else
				a = fgetc(fp);

		}
		printf("该文本文件的单词数为：%d\n", w);


	}
	int n = fclose(fp);
	system("pause");
	return 0;
}
