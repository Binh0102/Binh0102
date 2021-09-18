#include<stdio.h>

main()
{	
	int a=30,b=10;
do{
	b=b+4;
	a=a-b;}
	while(a>b);
	printf("a=%d    b=%d",a,b);
}
