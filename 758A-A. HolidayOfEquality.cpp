#include <iostream>
#include <algorithm>
#include <math.h>
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
	int cnt=0;
	if(n==1)
	{
		printf("0");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		cnt = cnt + abs(a[i] - a[n-1]);
	}
	printf("%d",cnt);
	return 0;
}
