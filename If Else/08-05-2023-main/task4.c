#include<stdio.h>


int main(){
	char a;
	
	printf("Enter the lower character :");
	scanf("%c",&a);
	
	if(a>='a' && a<='z'){
		a=a-32;
		printf("%c",a);
	}
	else{
		printf("%c",a);
	}
	
	return 0;
}