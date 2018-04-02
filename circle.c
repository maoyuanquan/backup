/*************************************************************************
    > File Name: circle.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Thu 11 Jan 2018 04:14:54 PM UTC
 ************************************************************************/
#include<stdio.h>
#include<math.h>

//写一个函数，打印输入半径的圆面积
void CircleArea ();

void CircleArea ()
{
	double radius;
	double area;
	printf ("请输入要计算圆的半径:");
	scanf ("%lf",&radius);
	area = 3.14 * radius * radius;
	printf ("%.2lf",area);
}
int main()
{
	CircleArea ();
	return 0;
}
