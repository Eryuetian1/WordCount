#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <string>
int main()
{
	char a[100]; //= "�½��ı��ĵ�.txt";
	char b[10];
	scanf("%s %s", &b, &a);
	FILE* fp = fopen(a, "r");

	if (!fp) {
		printf("�����ļ���ȡʧ��\n");
		return -1;

	}

	//�Բ��������ж�

	if (!strcmp(b, "-c")) {//�ַ���
		char temp;
		int num = 0;
		temp = fgetc(fp);
		while (temp != EOF) {
			//putchar(temp);
			temp = fgetc(fp);
			num++;

		}
		printf("���ı��ļ����ַ���Ϊ��%d\n", num);


	}
	else if (!strcmp(b, "-w")) {//������
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
		printf("���ı��ļ��ĵ�����Ϊ��%d\n", w);


	}
	int n = fclose(fp);
	system("pause");
	return 0;
}
