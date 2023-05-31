#include<stdio.h>
main(){
	int i,j,k,r,g,b,cnt=0;
	scanf("%d",&b);
	for(i=0;i<=r;i++){
		for(j=0;j<=g;j++){
			for(k=0;k<b;k++){
				printf("%d %d %d\n",i,j,k);
				cnt++;
			}
		}
	}
	printf("%d",cnt);
	
}	

