#include<stdio.h>

int main(void){
	char c;
	printf("문자형 데이터 입력 : ");
	scanf("%c",&c);  //& :기억장소의 주소값
	printf("결과값 : ");
	printf("%c",c); //출력할 때의 문자형 변환 %wc 또는 %c
}
