/*************************************************************************
    > File Name: 14.5funds1.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Wed 22 Aug 2018 02:00:15 PM UTC
 ************************************************************************/

/*funds1.c 把结构成员作为参数专递*/
#include<stdio.h>
#define FUNDLEN 50
struct funds{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(double,double);

int main(void){
	struct funds stan = {
	"Garlic-Melon Bank",
	4032.27,
	"Lucky's Savings and Loan",
	8543.94
	};
	printf("Stan has a total of $%.2f.\n",sum(stan.bankfund,stan.savefund));
	return 0;
}

double sum(double x,double y){
	return(x + y);
}
