 #include<stdio.h>
#include<string.h>


 int main(){
 	char pass[20];
 	int alphabet=0;
 	int number=0;
 	int special=0;
 	int i;
 	
 	printf("Password Must contain at least one letter,one Digit and one Special Symbol(!,@,#,$,%,&,*,_,-,+,=).\n\n\n");
 	
 	printf("Enter Your Password :");
 	scanf("%s",pass);
 	
 	 
 	if(strlen(pass)>=6){    
       for(i=0 ; i<strlen(pass) ; i++){  
        if((pass[i] >='A' && pass[i]<='Z') || (pass[i] >='a' && pass[i]<='z')){                
            alphabet = 1;     	               
        }
        
        else if(pass[i] >='0' && pass[i]<='9'){                 
            number = 1;        	            
        }
        
        else{                  
            special = 1; 	                 
        }   
       }  
	             
      if((alphabet && number && special) == 1){               
        printf("Password is valid");
      }
      
      else{	
        printf("Password is not valid ");		                
     }
    }
    else{        
        printf("Less than 6 letters!!");
    } 
	
	return 0;
}
 

