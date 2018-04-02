#include <stdio.h>
#include "hotel.h"

int menu (void)
{	int code,status;
	printf ("\n%s%s\n",STARS,STARS);
	printf ("Enter the number of the desired hotel:\n");
	printf ("1)七天连锁快捷			2)维也纳连锁酒店\n");
	printf ("3)锦江国际五星酒店		4)香格里拉国际五星酒店\n");
	printf ("5)退出\n");
	printf ("%s%s\n",STARS,STARS);
	while ((status = scanf ("%d",&code)) !=1 ||(code < 1 || code > 5))
	{	if (status != 1)
		scanf ("%*s");
		printf ("请选择数字1-5\n");
	}
	return code;
}

int getnights (void)
{	int nights;
	printf ("请输入您需要入住的天数：\n");
	while (scanf ("%d",&nights)!=1)
	{	if (nights != 1)
		scanf ("%*s");
		printf ("请输入数阿拉伯数字");
	}
	return nights;
}


void showprice (double rate,int nights)
{	int n; double total = 0.0,factor = 1.0;
	for (n =1; n <= nights; n++)
	{	factor *= DISCOUNT;
		total += rate * factor;
	}
	printf ("您的总计费用为：%.2f元。\n",total);
}

		
