#include <stdio.h>
int main(){
	int i=0;
	int t=0;
	for(i=0;i<2020;i++){
		if (9==i%10){
			t++;
			continue;
		}
		else if(9==i/10%10){
			t++;
			continue;
		}
		else if(9==i/100%10){
			t++;
			continue;
		}
	}
	printf("%d",t);
	return 0;
}
