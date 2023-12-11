#include <stdio.h>
int main()
{
	int num=1,sum=0,f=1;
	for(f=1;f<=100;f++){
		sum+=num;
		num=num+f+1;
	}
	printf("%d",sum);
	return 0;
}
