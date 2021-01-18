#include<stdio.h>
int lcm(int a,int b);
int main()
{
	int num1,num2,LCM;
	printf("ENTER FIRST NUMBER: ");
	scanf("%d",&num1);
	printf("ENTER SECOND NUMBER: ");
	scanf("%d",&num2);
	if(num1>num2)
	LCM=lcm(num2,num1);
	else
	LCM=lcm(num1,num2);
    printf("LCM OF %d AND %d = %d ",num1,num2,LCM);	
}
int lcm(int a,int b)
{
static int multiple =0;
	multiple=multiple+b;
	if(multiple%a==0 && multiple%b==0)
	return multiple;
	else
	return lcm(a,b);
}
