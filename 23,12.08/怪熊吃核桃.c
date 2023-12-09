#include <stdio.h>
int main(){
	int j=0,n=1543;
	while(n>1){
		if(0==n%2){
			n/=2;
		}
		else{n=(n-1)/2;
		j++;
		}
	}
	printf("%d",j+1);
	return 0;
}
