#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int d[n],a,b,i;
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&d[i]);
	}
	scanf("%d",&a);
	scanf("%d",&b);
	int count=0;
	for(i=a;i<b;i++)
	{
		count  = count + d[i-1]; 
	}
	printf("%d",count);
	return 0;
}