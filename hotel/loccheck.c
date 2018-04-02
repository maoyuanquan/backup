#include <stdio.h>

void mikado (int,int);

int main (void)
{	int pooh = 2, bah = 5;
	printf ("main函数中pooh的值为：%d地址为：%p\n",pooh,&pooh); 
	printf ("main函数中bah的值为：%d地址为：%p\n",bah,&bah); 
	mikado (pooh,bah);
	return 0;
}

void mikado (int a,int b)
{	int pooh = a, bah = b;
	printf ("mikado函数中pooh的值为：%d地址为：%p\n",pooh,&pooh);
	printf ("mikado函数中bah的值为：%d地址为：%p\n",bah,&bah);
}
