/*************************************************************************
    > File Name: 8.7.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Sun 02 Sep 2018 02:00:55 PM UTC
 ************************************************************************/

#include<stdio.h>
char get_choice(void);
void count(void);

int main(void){
	int choice;
	while((choice = get_choice()) != 'q'){
		switch(choice){
			case 'a' : printf("Buy low,sell high.\n");
				break;
			case 'b' : putchar('\a');	//ANSI
				break;
			case 'c' : count();
				break;
			default : printf("Program error!");
				break;
		}
	}
	return 0; 
}

char get_choice(void){
	int ch;
	printf("Enter the letter of your choice:\n");
	printf("a. advice			b. bell\n");
	printf("c. count			q. quit\n");
	ch = getchar();
	while((ch < 'a'  || ch > 'c') && ch != 'q'){
		printf("Please respond with a, b, c, or q.\n");
		ch = getchar();
	}
	return ch;
}
