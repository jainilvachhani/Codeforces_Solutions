#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	if(n%2!=0)
	{
		printf("%d\n",n/2);
		int temp = n/2-1;
		while(temp--)
		{
			printf("2 ");
		}
		printf("3");
	}
	else
	{
		printf("%d\n",n/2);
		int temp = n/2;
		while(temp--)
		{
			printf("2 ");
		}
	}
	return 0;
}