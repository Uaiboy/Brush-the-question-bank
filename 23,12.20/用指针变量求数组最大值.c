#include <stdio.h>
void fun(int a[8],int *p1,int *p2,int size){
	int i=0,n=0;
	for(n=1;n<size;n++){
		if(*p1<a[n]) {
			*p1=a[n];
		}
	for(i=0;i<size;i++){
		if(*p1==a[i]) break;
		}
	*p2=i;
	}
}
int main(){
	int arr[]={2,6,3,44,6,234,423,43};
	int max=arr[0];
	int index=0;
	int size1=sizeof(arr)/sizeof(int);
	fun(arr,&max,&index,size1);
	printf("%d %d ",max,index);
}
