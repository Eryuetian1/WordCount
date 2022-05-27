//#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <string>
int main(/*int argc, char* argv[]*/)
 {
		     
		        /* printf("main函数收到了%d个参数\n",argc);//第一个参数默认是可执行文件本身，第二个参数开始是接受到的参数
		         int i;
	            for( i = 0; i < argc; i++ ){
	                printf("%s ",argv[i]);
	            }
	            printf("\n");
	        */
	char a[50]; //= "新建文本文档.txt";
	char b[10][10] = { "-c", "-w" };
		
		     //if (argc == 3) {
		
			         //打印接受到的参数
			         
			           /*  int i;
			             printf("收到的外部参数：");
			             for( i = 1; i < argc; i++ ){
			                 printf("%s ",argv[i]);
			             }
			             printf("\n");
			         */
			
			         //尝试读取文件的内容
	printf("\n请输入文件地址：\n");
	scanf("%s", a);
			         char data;
		             FILE * fp = fopen(b[2], "r");
		
			         if (!fp) {
			             printf("错误：文件读取失败\n");
			             return -1;
			
		}
		
			         //对参数进行判断
			
			         if (!strcmp(b[1], "-c")) {//字符数
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
		         else if (!strcmp(b[1], "-w")) {//单词数
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
		//         else if (!strcmp(argv[1], "-l")) {//行数
		//	             char temp;
		//	             int num = 1;
		//	             temp = fgetc(fp);
		//	             while (temp != EOF) {
		//		
		//			                 //putchar(temp);
		//			                 if (temp == '\n') {//字符需要用单引号扩住
		//			                     num++;
		//			
		//		}
		//		                 temp = fgetc(fp);
		//	}
		//	             printf("该文本文件的行数为：%d\n", num);
		//}
		//         else {
		//	             printf("错误：参数超出范围！\n");
		//	             printf("允许参数：-c，-w，-l\n");
		//	
		//}
		         int n = fclose(fp);
	
	//}
	    /* else {
		        printf("错误：运行参数必须要3个\n");
		         printf("用法：wc.exe [parameter] [file_name]\n");
		
	}*/
	     system("pause");
	     return 0;
}