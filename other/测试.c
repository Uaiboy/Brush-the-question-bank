#include <stdio.h>
#include <string.h>
/*����˼·�� ��i��i����A��i������Ϊ��ʶA��λ��
��A��λ��Ϊ���ޣ�A֮��˳������BCD,A֮ǰ����������BCD 
*/ 
int main()
{
	int n,m,i,j,k=0;
	scanf("%d%d",&n,&m);
	char s[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ\0"};//��26����ĸ�洢��s�� 
	char a[27]={'\0'};//��ʼ��a 
	for(i=0;i<n;i++){
		k=0;
		for(j=i;j<m+i;j++){//i��A���ڵ��±�ֵ 
			a[j]=s[k++];//�ؼ����ڴ˴���k++ 
		}
		k=0;
		for(j=i-1;j>=0;j--){//i��A���ڵ��±�ֵ,i-1��������ǰһ�� 
			a[j]=s[++k];//�Լ��˴���++k 
		}
		for(j=0;j<m;j++)printf("%c",a[j]);
		printf("\n");
	}
return 0; 
}

