#include<stdio.h>
main(){
	char str[20]="";
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++){
		printf("\'%c\'\n",str[i]);
	}
}
