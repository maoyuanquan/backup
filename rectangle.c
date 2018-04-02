/*************************************************************************
    > File Name: rectangle.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Fri 12 Jan 2018 12:42:51 PM UTC
 ************************************************************************/

#include<stdio.h>
//make a function to print out the area which you keyed in the width and height
void RectangleArea(void);
void RectangleArea(void)
{
	double width,height,area;
	printf("请输入您要计算矩形的宽度值，单位：米\n");
	scanf("%lf", &width);
	printf("请输入您要计算矩形的高度值，单位：米\n");
	scanf("%lf", &height);
	area=width * height;
	printf("您所计算的矩形面积为：%.2lf平方米", area);
}

int main(void)
{
	RectangleArea();
	return 0;
}
