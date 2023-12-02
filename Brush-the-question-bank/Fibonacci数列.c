#include <stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	arr[0]=1;arr[1]=1;arr[2]=2;
	if (n==1 || n==2)
	printf("1");
	else{
		for (i=3;i<n;i++){
		arr[i]=(arr[i-1]+arr[i-2])%10007;
		}
		printf("%d",arr[i-1]%10007);
	}
}
