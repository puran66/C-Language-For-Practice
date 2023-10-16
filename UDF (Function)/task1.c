#include<stdio.h>

int cube(int n){
	
	return n*n*n;
}

int main(){
	int a;
	
	printf("Enter the value for cube: ");
	scanf("%d",&a);
	
	printf("%d",cube(a));
	
	return 0;
}