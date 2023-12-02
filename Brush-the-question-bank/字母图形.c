#include <stdio.h>
int main(){
	int t,i,n,m,k=65;
	scanf("%d %d",&n,&m);
	int arr[m];
	for(i=0;i<n;i++){
		for(t=0;t<m;t++){
			arr[i]=k+t;
			printf("%c",arr[i]);
		}
		k++;
		printf("\n");
	}
	return 0;
}
