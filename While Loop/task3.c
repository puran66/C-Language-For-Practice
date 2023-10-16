#include<stdio.h>

int main(){
	int n;
	int p=0;
	
	printf("Enter the digit:");
	scanf("%d",&n);
	
	while(n!=0){
		n=n/10;
		p++;
	}
	printf("total %d digit",p);
}
