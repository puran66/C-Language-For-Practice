#include<stdio.h>

int main(){
	int p,sum,last;
	
	printf("Enter the value:\n");
	scanf("%d",&p);
	
	last=p%10;
	
	while(p>9){
		p=p/10;
	}
	
	sum=last+p;
	printf("the sum of first and last digit is:%d",sum);
	return 0;
}

