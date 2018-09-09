/*************************************************************************
    > File Name: 8.1echo.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Sun 26 Aug 2018 07:23:37 AM UTC
 ************************************************************************/

#include<stdio.h>

int main(void){
	char ch;
	while((ch = getchar()) != '#')
		putchar(ch);
	return 0;
}
