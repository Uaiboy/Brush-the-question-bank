#include <stdio.h>
struct student{
	int number;
	char name[8];
	char sex;
	int age;
	float c_program;
}st1={1001,"张三",'男',18,74}; 
int main(){
	struct student ls;
	ls.number=1002;
	//ls.name="李四";
	ls.sex='女';
	ls.age=20;
	ls.c_program=85;
	printf("st1: %d,%s,%c,%d,%0.2f",st1.number,st1.name,st1.sex,st1.age,st1.c_program);
	printf("ls: %d,%s,%c,%d,%0.2f",ls.number,ls.name,ls.sex,ls.age,ls.c_program);
	return 0;
}
