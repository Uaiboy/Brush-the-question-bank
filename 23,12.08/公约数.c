#include <stdio.h>
int main(){
	int j=0,i,n=2020,m=3030;
	for(i=1;i<=2020;i++){
		if(0==n%i && 0==m%i){
			j++;
		}
	}
	printf("%d",j);
	return 0;
}
