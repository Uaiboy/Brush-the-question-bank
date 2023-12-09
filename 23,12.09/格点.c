#include <stdio.h>
int main(){
	int x=0,y=0,j=0;
	for(x=1;x<=2021;x++){
		for(y=1;y<=2021;y++){
			if(x*y<=2021){
				j++;
			}
		}
	}
	printf("%d",j);
	return 0;
}
