#include <stdio.h>
#include <string.h>
/*整体思路是 第i行i列是A，i可以作为标识A的位置
以A的位置为界限，A之后按顺序排列BCD,A之前按逆序排列BCD 
*/ 
int main()
{
	int n,m,i,j,k=0;
	scanf("%d%d",&n,&m);
	char s[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ\0"};//将26个字母存储在s里 
	char a[27]={'\0'};//初始化a 
	for(i=0;i<n;i++){
		k=0;
		for(j=i;j<m+i;j++){//i是A所在的下标值 
			a[j]=s[k++];//关键在于此处的k++ 
		}
		k=0;
		for(j=i-1;j>=0;j--){//i是A所在的下标值,i-1则是它的前一个 
			a[j]=s[++k];//以及此处的++k 
		}
		for(j=0;j<m;j++)printf("%c",a[j]);
		printf("\n");
	}
return 0; 
}

