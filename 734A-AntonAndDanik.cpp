#include <iostream>
using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	char s[n];
	scanf("%s",s);
	int a=0,d=0,i;
	for(i=0;i<n;i++)
	{
		if(s[i]=='A')
		{
			a++;
		}
		if(s[i]=='D')
		{
			d++;
		}
	}
	if(a>d)
	{
		printf("Anton");
	}
	else if(d>a)
	{
		printf("Danik");
	}
	else
	{
		printf("Friendship");
	}
	return 0;
}