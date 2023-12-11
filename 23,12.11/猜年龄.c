#include <stdio.h>
int main(){
	int i=0;
	int j=0;
	for(i=1;i<50;i++){
		for(j=1;j<59;j++){
			if(i*j==(i+j)*6) printf("%d %d\n",i,j);
			}
		}
	return 0;
}
