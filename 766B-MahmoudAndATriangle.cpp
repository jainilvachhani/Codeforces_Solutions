#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int a[n],i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	for(i=0;i<n-2;i++)
	{
		if(a[i] + a[i+1] > a[i+2])
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}
