#include<stdio.h>
#include<string.h>



int main(){
	int i;	
	int count[26]={0};
	char sr[100];
	
	printf("enter the any of string :");
	gets(sr);
	
	for(i=0;sr[i]!='\0';i++){
		if(sr[i]>='A' && sr[i]<='Z'){
			   count[sr[i]-'A']++;
		}
		if(sr[i]>='a' && sr[i]<='z'){
			   count[sr[i]-'a']++;
		}
	}
	for(i=0;i<26;i++){
		if(count[i]!=0){
			printf("Character %c Occurs %d Times \n",i+'a',count[i]);
		}
	}
	
	return 0;
}