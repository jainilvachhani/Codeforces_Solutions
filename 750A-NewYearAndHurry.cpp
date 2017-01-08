#include <iostream>
using namespace std;

int main() {
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	int count = 0;
	int time  = 240,i=1;
	time = time  - k;
	while(time>0 && i<=n)
	{
		time = time - 5*i;
		i++;
		if(time>=0)
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}