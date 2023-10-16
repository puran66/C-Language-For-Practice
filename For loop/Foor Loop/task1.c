#include<stdio.h>

 int main(){
 	int n;
 	
 	printf("Enter the value size of array :");
 	scanf("%d",&n);
 	
 	int a[n],i;
 	
 	for(i=0;i<n;i++){
 	    printf("Enter the elements :");
 	    scanf("%d",&a[i]);
	 }
	for(i=0;i<n;i++){
		if(a[i]<0){
		printf("%d",a[i]);
	}
	}
	 return 0;
 }
