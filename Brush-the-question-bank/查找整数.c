#include <stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
		scanf("%d",&j);
	for(i=0;i<n;i++){
		if(arr[i]==j){
		break;
		}
	}
	if (i==n){
		printf("-1");
	}
	else printf("%d",i+1);
	return 0;
}
