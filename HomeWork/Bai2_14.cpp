#include<stdio.h>
int main(){
	long k,s;
	scanf("%ld",&k);
	if(k==1)
	s=50;
	else if(1<k&&k<=31)
	s=50+40*(k-1);
	else
	s=50+40*29+30*(k-30);
	printf("%ld",s);
}
