#include<stdio.h>
#include<string.h>

int main(){
	char a[20];
	char b[20];
	int i;
	int len=0;
	int check=0;
	
	printf("Enter the value :");
	gets(a);
	
	len=strlen(a);
	strcpy(b,a);
	strrev(b);
	
	for(i=0;i<len;i++){
		if(a[i]!=b[i]){
			check=1;
			break;
		}
	}
	if(check==0){
		printf("The value is Palindrome...");
	}
	else{
		printf("The value is Not Palindrome...");
	}
	
	return 0;
}