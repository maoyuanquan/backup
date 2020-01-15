#include<stdio.h>

int main(void)
{
	int hour=0,min=0,sec=0,hao=0,total=0;
	printf("请输入时间，格式为：时 分 秒 豪\n");
	scanf("%d%d%d%d",&hour,&min,&sec,&hao);
	total=((((hour*60)+min)*60+sec)*1000+hao);
	printf ("您输入的小时数为：%d时\n",hour);
	printf ("您输入的分钟数为：%d分\n",min);
	printf ("您输入的秒时数为：%d秒\n",sec);
	printf ("您输入的豪秒数为：%d豪\n",hao);
	printf ("您输入的时间转化成的数字为:\n%d\n",total);
	return 0;
}	
