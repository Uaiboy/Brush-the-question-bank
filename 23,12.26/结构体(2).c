#include <stdio.h>
struct student{
	int number;
	char name[8];
	char sex;
	int age;
	float c_program;
}stus[3]={
	{1001,"张三",'男',19,80},
	{1002,"李四",'女',18,76},
	{1003,"王五",'男',20,98}
	
	
};
int main(){
	int i=0;
	for(i=0;i<3;i++){
		printf("%d %s %c %d %0.2f\n",stus[i].number,stus[i].name,&stus[i].sex,stus[i].age,stus[i].c_program);
	}
	return 0;
}

