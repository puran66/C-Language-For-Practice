#include<stdio.h>

int divisible(int n){
	if(n%3==0){
		return printf("The value is divisible by 3");
	}
	else if(n%5==0){
		return printf("The value is divisible by 5");
	}
	else{
		return printf("The value is not divisible by 3 and 5");
	}
}                                                  

int main(){
	int a;
	
	printf("Enter the value : ");
	scanf("%d",&a);
	
	divisible(a);
	
	return 0;
}




