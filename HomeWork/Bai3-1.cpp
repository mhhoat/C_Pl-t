#include<stdio.h>
int main(){
	long a,s=0;
	scanf("%ld",&a);
	for(int i=1;i<=a;i++){
		s+=i;
	}
	printf("%ld",s);
}
