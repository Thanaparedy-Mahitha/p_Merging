#include<stdio.h>
void main(){
	int num;
	printf("welcome to even number checker\n");
	printf("enter the number\n");
	scanf("%d",&num);
	if(num%2==0)
		printf("even\n");
	else
		printf("not even\n");
}
