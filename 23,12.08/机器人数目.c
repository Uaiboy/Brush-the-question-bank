#include <stdio.h>
int main(){
	int r=100,w=600,s=280;
	int a,b,c;
	for(c=0;c<100;c++)
	{
		for(b=0;b<100;b++){
			for(a=0;a<100;a++){if(8*a+6*b+4*c==w && a+3*b+4*c==s && a+b+c==r)
	break;
			}
			if(8*a+6*b+4*c==w && a+3*b+4*c==s && a+b+c==r)
	break;
		}
	if(8*a+6*b+4*c==w && a+3*b+4*c==s && a+b+c==r)
	break;
	}
	printf("%d",b);
	return 0;
}
