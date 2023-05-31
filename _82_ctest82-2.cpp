#include<stdio.h>
main(){
	int i,j;
	scanf("%d",&j);
	for(i=2;i<=16;i++){
		for(j=1;j<=16;j++){
			printf("%x x %x=%x\n",i,j,i*j);
		}
		
	}
	
}	

