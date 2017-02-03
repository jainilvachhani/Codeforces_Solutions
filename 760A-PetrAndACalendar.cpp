#include <iostream>
using namespace std;

int main() {
	int m,d;
	scanf("%d",&m);
	scanf("%d",&d);
	int limit;
	if(m == 1 || m == 3|| m == 5  || m == 7 || m == 8 || m == 10 || m == 12 )
	{
		limit = 31;
	}
	else if(m == 4 || m == 6 || m == 9 || m == 11)
	{
		limit = 30;
	}
	else
	{
		limit = 28;
	}
	int col = 1;
	limit--;
	while(limit !=0)
	{
		if(d==7)
		{
			d = 1;
			col++;
		}
		else
		{
			d++;
		}
		limit--;
	}
	printf("%d",col);
	return 0;
}
