#include<stdio.h>
main(){
	int sum=0;
	int a;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf("%d",sum);
}	

