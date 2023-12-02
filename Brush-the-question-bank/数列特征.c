#include <stdio.h>
int main(){
	int n,max,i,min,sum=0;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		scanf("%d",&arr[i]);
	} 
	max=arr[0];
	min=arr[0];
	for (i=1;i<n;i++){
		if(max<arr[i])
			max=arr[i];
	}
	for (i=1;i<n;i++){
		if(min>arr[i])
			min=arr[i];
	}
	for (i=0;i<n;i++)
		sum+=arr[i];
	printf("%d\n%d\n%d",max,min,sum);
	return 0;
}
