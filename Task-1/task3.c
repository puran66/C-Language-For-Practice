#include<stdio.h>
#include<string.h>

int main(){
	int s[1000];
	int leng=0,*p;
	

	printf("Enter the string :");
	gets(s);
	
	leng=strlen(s);
	
	p=&leng;
	
	printf("The Length of string is : %d",*p);
	
	return 0;
}