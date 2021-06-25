//"a program of c operator"
#include<stdio.h>
int main()
{
int a,b,add,sub,mul,div,rem,test=100;
test+59;	
	printf("Enter a,b values:");
	scanf("%d%d",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("Result of additn is=%d\n",add);
	printf("Result of subctraction is=%d\n",sub);
	printf("Result of multiplcation is=%d\n",mul);
	printf("Result of division is=%d\n",div);
	printf("Result of remainder is=%d\n",rem);
printf("Result of test +59=%d\n",test);
	
	
	
	return 0;
}