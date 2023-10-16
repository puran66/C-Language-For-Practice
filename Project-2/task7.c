#include<stdio.h>

 int main(){
 	int a =2000;
 	printf("leap yaer from 2000 to 3000\n");
 	 do{
 		if(a%4 == 0){
	       	printf("%d\n",a);
		   }
		   a++;
	  }
 	 while(a<=3000);
	 return 0;
 }
