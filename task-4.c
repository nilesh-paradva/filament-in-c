#include<stdio.h>
#include<string.h>

int main(){
	
	char str[] = "Hello Good Morning, How Are You?";
	int ln,a,n=0;
	
	printf("\nNormal string :- %s", str);
	
	ln = strlen(str);
	
	for(a=0; a<=ln; a++){
		if(str[a]==' '){
			n++;
		}
	}
	
	printf("\nCount total number of words in a string = %d\n\n", n+1);

	return 0;
}