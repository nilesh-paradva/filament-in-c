#include<stdio.h>
#include <string.h>

int main(){
	
	char str[40], str2[40];
	int ln,a,b;
	
	printf("Enter the word :- ");
	scanf("%s", &str);
	
	ln = strlen(str);
	
	for(a=0; a<ln; a++){
		
		str2[(ln-(a+1))] = str[a];
	}
	
	b = strcmp(str2,str);
	
	if(b==0){
		printf("Your word is palindrome");
	}else{
		printf("Your word is not palindrome");
	}

    return 0;
}