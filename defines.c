/*************************************************************************
    > File Name: defines.c
    > Author: John Mao
    > Mail: maoyuanquan@icloud.com
    > Created Time: Thu 01 Mar 2018 04:48:04 AM UTC
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
#include<float.h>

int main(void)
{
	printf ("Some numbers limits for your systrm:\n");
	printf ("Biggest int : %d\n",INT_MAX);
	printf ("Smallest long long:%lld\n",LLONG_MIN);
	printf ("One Bye = %d bits on this system.\n",CHAR_BIT);
	return 0;
}
