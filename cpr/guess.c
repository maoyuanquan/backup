/*************************************************************************
    > File Name: guess.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Mon 27 Aug 2018 11:56:39 PM UTC
 ************************************************************************/

#include<stdio.h>

int main(){
	int guess = 1;
	char response;
	printf("pick an integer from 1 to 100.I will try to guess it\n");
	printf("Respond with a y if My guess is right and with \n");
	printf("an n if it is wrong.\n");
	printf("uh...is your number %d?\n",guess);
	while((response = getchar()) != 'y'){
		if(response == 'n')
			printf("well,then,is it %d?\n",++guess);
		else
			printf("Sorry,I understand only y or n.\n");
		while (getchar() != '\n')
			continue;
	};
	printf("I knew I could do it!\n");
	return 0;
}
