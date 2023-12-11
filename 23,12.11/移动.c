#include <stdio.h>
#include <string.h>
int main(){
	char arr[1000];
	gets(arr);
	int i=0;
	int u=0,d=0,l=0,r=0;
	for(i=0;i<strlen(arr);i++){
		if(arr[i]=='D') d++;
		else if(arr[i]=='U') u++;
		else if(arr[i]=='L') l++;
		else if(arr[i]=='R') r++;
	}
	int x=d-u;
	int y=r-l;
	printf("%d %d",x,y);
	return 0;
}
