#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	char a[n+1];
	int b[n];
	int i;
	scanf("%s",a);
	int blackcount = 0,pointer =0,totalblack=0;
	for(i=0;i<strlen(a)+1;i++)
	{
		if(a[i]=='B')
		{
			blackcount++;
			
		}
		else if(blackcount!=0)
		{
			totalblack++;
			b[pointer] = blackcount;
			blackcount = 0;
			pointer++;
		}
	}
	printf("%d\n",totalblack);
	for(i=0;i<totalblack;i++)
	printf("%d ",b[i]);
	
	return 0;
}