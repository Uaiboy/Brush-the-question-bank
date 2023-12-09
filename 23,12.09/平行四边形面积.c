#include <stdio.h>
int main(){
	float h,l,s;
	scanf("%f",&h);
	scanf("%f",&l);
	s=l*h;
	s*=10;
	if(0==(int)s%10)
	printf("%.0f",s/10);
	else if ((int)s%10>=5) printf("%.1f",s/10+1);
	else printf("%0.f",s);
}
