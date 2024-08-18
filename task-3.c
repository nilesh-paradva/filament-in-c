#include<stdio.h>
#include<string.h>

int main(){
	
	char str[40];
	int ln,a;
	
	printf("Enter Your Massage :- ");
	scanf("%s", &str);
	
	printf("Normal string :- %s", str);
	
	ln = strlen(str);
	
	for(a=0; a<=ln; a++){
		if(str[a]>='A'&&str[a]<='Z'){
			str[a]+=32;
		}else if(str[a]>='a'&&str[a]<='z'){
			str[a]-=32;
		}
	}
	
	printf("\nToggle case of each character of a string :- %s", str);

	return 0;
}
