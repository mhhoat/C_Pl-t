#include<stdio.h>
long giaiThua(long a){
	long s=1;
	for(long i=1;i<=a;i++){
		s*=i;
	}
	return s;
}
int main(){
	long a;
	do{
		scanf("%ld",&a);
	}while(!(a>0));
	printf("%ld",giaiThua(a));
}
