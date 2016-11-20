#include <iostream>
using namespace std;

int main() {
	int two=0,three=0,five=0,six=0;
	scanf("%d",&two);
	scanf("%d",&three);
	scanf("%d",&five);
	scanf("%d",&six);
	int sum =0;
	while((two!=0 && five!=0 && six!=0) || (three!=0 && two!=0))
	{
		if(two!=0 && five!=0 && six!=0)
		{
			sum+=256;
			two--;
			five--;
			six--;
		}
		else if(three!=0 && two!=0)
		{
			three--;
			two--;
			sum+=32;
		}
	}
	printf("%d",sum);
	return 0;
}