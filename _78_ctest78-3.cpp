#include<stdio.h>
main(){
	int i=1;
	int sum=0;
	int a;
	scanf("%d",&a);
	while(i<=a){
		if(i%2==0){
			sum=sum+i;
		}
		i++;
	}
	printf("%d\n",sum);
}	

