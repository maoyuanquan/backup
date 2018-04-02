/*************************************************************************
    > File Name: calarea.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Sat 13 Jan 2018 02:50:15 PM UTC
 ************************************************************************/

//写一个可以计算圆形，矩形，三角形面积的函数

#include<stdio.h>

//函数申明
int choice(void);
double calCircle (double);
double calRectangle(double, double);
double calTriangle(double, double);
double powx(double, int);

//函数定义
int choice()
{
	int yourChoice;
	printf("本程序可以计算圆形，矩形，和三角形的面积，请选择:");
	printf("1)圆形\t 2)矩形\t 3)三角形\t 0)退出\n");
	scanf("%d",&yourChoice);
	return yourChoice;
}

double calCircle(double radius)						//计算圆面积函数
{
	printf("请输入半径值：");
	scanf("%lf",&radius);
	double area;
	area = 3.14 * powx(radius,2);
	return area;
}

double calRectangle(double width,double height)		//计算矩形面积函数
{
	printf("请分别输入矩形的宽和高：");
	scanf("%lf%lf",&width,&height);
	double area;
	area = width * height;
	return area;
}

double calTriangle(double width, double height)		//计算三角形面积函数
{
	double area;
	printf("请分别输入三角形的宽和高：");
	scanf("%lf%lf",&width,&height);
	area = width * height / 2;
	return area;
}

double powx(double base, int power)					//计算幂值函数
{
	double nums = 1, i;
	for(i = 0 ; i < power; i++)
		nums  *= base;
	return nums;
}

int main(void)										//主函数
{
	int result2 = choice();
	double result;
	while(result2 == 1 || result2 == 2 || result2 == 3)
	{
		if(result2 == 1)
		{
			result = calCircle(1);
			printf("您所计算的圆面积为：%.2lf平方米\n",result);
		}
		else if(result2 == 2)
		{
			result = calRectangle(1,1);
			printf("您所计算的矩形面积为：%.2lf平方米\n\n",result);
		}
		else if(result2 == 3)
		{
			result = calTriangle(1,1);
			printf("您所计算的三角形面积为：%.2lf平方米\n",result);
		}
		else
			return 0;
		result2 = choice();
	}
	//printf("%d", result);
	/*
	*/
	return 0;
}
