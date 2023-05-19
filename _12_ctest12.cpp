#include<stdio.h>

int main(void){
	float f;
	printf("실수형 데이터 입력 : ");
	scanf("%f",&f);  //& :기억장소의 주소값
	printf("결과값 : ");
	printf("%5.2lf",f); //%.1lf 등을 통해 소수점을 조절할 수 있다. 
}
