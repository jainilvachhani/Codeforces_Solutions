#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a[3];
	int i,distance =0;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,a+3);
	distance  = (a[1]-a[0]) + (a[2]-a[1]);
	printf("%d",distance);
	return 0;
}