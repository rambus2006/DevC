#include<stdio.h>
main(){
		int a=0,b=0 ; //연산자의 우선순위 중 가장 높은 것은 () > ^ (제곱 연산자) > 산술 연산자(*,/) > (+,-) > 
		scanf("%d %d",&a,&b);  
		printf("%d",a/b);
		/*
		long long int a,b ; //큰 수의 값도 받을 수 있게 하는 long long 타입  
		scanf("%lld %lld",&a,&b);  
		printf("%lld",a/b); 
		*/
	}

