#include<stdio.h>
#include<string.h>

int main(){
	
	char str[] = "Hello Good Morning, How Are You ?";
	int ln,a;
	
	printf("Normal string :- %s", str);
	
	ln = strlen(str);

	printf("\nRemove White Space :- ");
	for(a=0; a<=ln; a++){
		if(str[a]!=' '){
			printf("%c",str[a]);
		}
	}

    return 0;
}