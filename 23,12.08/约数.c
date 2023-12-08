#include <stdio.h>
int main()
{
	int n=2020,j=0;
	int i=0;
	for(i=1;i<=2020;i++){
		if(0==n%i){
			j++;
		}
	}
	printf("%d",j);
	return 0;
}
