#include<stdio.h>

 int main(){
 	
 	int n;
 	
 	printf("Enter the size of array :");
 	scanf("%d",&n);
 	
 	int a[n][n],i,j,sum=0;
 	
 	for(i=0;i<n;i++){
 	    for(j=0;j<n;j++){
 	    	printf("Enter the elements :");
 	        scanf("%d",&a[i][j]);
		 }
	 }                                       
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	}
	
	printf("the diagonal sum of elements is %d",sum);
	
	 return 0;
 }
