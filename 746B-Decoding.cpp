#include <iostream>
#include <string.h>
#include <stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	char a[n];
	scanf("%s",a);
	int i;
	int b[n];
	if(strlen(a)%2==0)
	{
		i=0;
		int x = (n/2) - 1;
		int forw = x-1;
		int back = x+1;
		b[n/2-1] = a[i];
		i++;
		while(1)
		{
			if(i==strlen(a))
			{
				break;
			}
			if(i==strlen(a))
			{
				break;
			}
			b[back] = a[i];
			i++;
			back++;
			if(i==strlen(a))
			{
				break;
			}
			b[forw] = a[i];
			i++;
			forw--;
		}
				
	}
	if(strlen(a)%2!=0)
	{
		i=0;
		int x = (n/2);
		int forw = x-1;
		int back = x+1;
		b[n/2] = a[i];
		i++;
		while(1)
		{
			if(i==strlen(a))
			{
				break;
			}
			b[forw] = a[i];
			i++;
			forw--;
			if(i==strlen(a))
			{
				break;
			}
			b[back] = a[i];
			i++;
			back++;
			if(i==strlen(a))
			{
				break;
			}
			
		}
				
	}
	for(i=0;i<n;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}