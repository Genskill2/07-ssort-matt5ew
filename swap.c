#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

void swap_max(int a[], int b , int c)
{
	int max=-2147483648,pos=-1;
	for(int i=c;i<b;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			pos=i;
		}
		else continue;
	}
	a[pos]=a[c];
	a[c]=max;
}

void ssort(int a[],int b)
{
	for(int i=0;i<b;i++)
		swap_max(a,b,i);
}
