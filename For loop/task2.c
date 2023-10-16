#include<stdio.h>

int main(){
	int n;
	
	printf("Enter the size of array :");
	scanf("%d",&n);
	
	int a[n][n],i,j,length;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Enter the elements :");
			scanf("%d",&a[i][j]);
		}
	}
	length=n*n;
	
	printf("The length of array is %d ",length);
	
	return 0;
}
