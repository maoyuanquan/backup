/*************************************************************************
    > File Name: echo_eof.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Mon 27 Aug 2018 05:15:46 AM UTC
 ************************************************************************/

#include<stdio.h>

int main(void){
	int ch;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
