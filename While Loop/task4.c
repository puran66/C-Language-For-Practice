#include<stdio.h>

int main(){
	int p,a,sum,last;
	
	printf("Enter the value:\n");
	scanf("%d",&p);
	
	last=p/10;
	
	while(p>9){
		a=a/10;
	}
	
	sum=last+a;
	printf("the sum of first and last digit is:%d",sum);
	return 0;
}
