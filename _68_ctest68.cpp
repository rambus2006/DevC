#include<stdio.h>
main(){
	int a;
	scanf("%d",&a);
	if(a>=90&&a<=100){
		printf("A\n");
	}else if(a>=70&&a<90){
		printf("B");
	}else if(a>=40&&a<70){
		printf("C");
	}else if(a>=0&&a<40){
		printf("D");
	}else
		printf("DataError");

	
}

