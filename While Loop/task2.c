#include<stdio.h>

 int main(){
 	int a=1;
 	int p;
 	int m;
 	
 	printf("Enter the number for multiplication table:");
 	scanf("%d",&p);
 	
 	while(a<=10){
 		m=a*p;
 		printf("%d*%d=%d\n",p,a,m);
 		a++;
	 }
	 return 0;
 }
