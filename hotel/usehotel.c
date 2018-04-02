/******************************************************************************
	>标题：	旅馆房间收费程序	usehotel.c
	>作者：	毛远泉
	>日期：	2018/02/14
	>目标：	有四个旅馆，有一个相同的活动，次天的房费是前一天的95%，最多不超
			过4天，写一个程序，用户输入酒店名和入住天数，自动计算出费用。
******************************************************************************/

#include <stdio.h>
#include "hotel.h" //定义常亮、声明函数

int main (void)
{	int nights,code; double hotelRate;
	while ((code = menu ()) !=QUIT)
	{	switch (code)
		{	case 1: hotelRate = HOTEL1;
				break;
			case 2: hotelRate = HOTEL2;
				break;
			case 3: hotelRate = HOTEL3;
				break;
			case 4: hotelRate = HOTEL4;
				break;
			default: hotelRate = 0.0;
				printf ("Oops\n");
				break;
		}
		nights = getnights ();
		showprice (hotelRate,nights);
	}
	printf ("Thank you and goodbye.\n");
	return 0;
}
