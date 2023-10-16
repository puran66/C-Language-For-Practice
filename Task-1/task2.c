#include<stdio.h>

 int main(){
 	int i,n;
 	
 	printf("Enter the size of Element :");
 	scanf("%d",&n);
 	
 	int a[n],*p[n];
 	
 	for(i=0;i<n;i++){
 		printf("Enter the Elements => ");
 		scanf("%d",&a[i]);
	
       p[i]=&a[i];
	 }
	 
	printf("you entered Elements These are :\n");
	
	for(i=0;i<n;i++){
		printf("you entered Elements => :%d\n",*p[i]);
	}
 	
 	
 	return 0;
 }