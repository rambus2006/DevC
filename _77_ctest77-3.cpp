#include<stdio.h>
main(){
	int i=1,sum=0;
	while(i<=100)
	{
		sum+=i;
		i++;
	}
	printf("%d\n",sum);
	
	int i2=1,n;
	unsigned long long int sum2=1;
	scanf("%d",&n);
	while(i2<=100){
		sum2 = sum2*i2;
		i2++;
	}
	printf("%llu",sum2);
}	

