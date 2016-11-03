#include <iostream>
using namespace std;

int main() 
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]+a[i+1]);
	}
	printf("%d\n",a[n-1]);
	return 0;
}