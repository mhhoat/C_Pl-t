#include<stdio.h>
int main(){
	long s,m=0,d;
	scanf("%ld",&s);
	while(s!=0){
		d=s%10;
		if(m<d)m=d;
		s=s/10;
	}
	printf("%ld",m);
}
