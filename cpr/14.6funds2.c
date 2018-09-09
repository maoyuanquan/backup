/*************************************************************************
    > File Name: 14.6funds2.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Fri 24 Aug 2018 03:10:00 AM UTC
 ************************************************************************/

/*传递指向结构的指针*/

#include<stdio.h>
#define FUNDLEN 50
struct funds {
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds *);	//参数是一个指针

int main(void){
	struct funds stan = {
		"Garlic-Melo Bank",
		4032.27,
		"Lucky's Savings and Loan",
		8543.94
	};
	printf("Stan has a total of $%.2f.\n",sum(&stan));
	return 0;
}

double sum(const struct funds *money){
	return (money->bankfund + money->savefund);
}
