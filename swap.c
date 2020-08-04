#include<stdio.h>
main()
{
	int a,b;
	printf("enter two numbers: ");
	scanf("%d""%d",&a,&b);
	printf("mnumbers before swap %d and %d",a ,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nnumbers after swap %d and %d",a,b);
}
