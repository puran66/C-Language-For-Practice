#include<stdio.h>


int main(){
	char a;
	
	printf("Enter the Upper character :");
	scanf("%c",&a);
	
	if(a>='A' && a<='Z'){
		a=a+32;
		printf("%c",a);
	}
	else{
		printf("%c",a);
	}
	
	return 0;
}