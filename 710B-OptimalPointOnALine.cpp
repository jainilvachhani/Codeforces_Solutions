#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	if(n%2!=0)
	{
		printf("%d",a[n/2]);
	}
	else
	{
		if(a[n/2]<a[(n/2)-1])
		{
			printf("%d",&a[n/2]);
		}
		else
		{
			printf("%d",a[(n/2)-1]);
		}
	}
	return 0;
}