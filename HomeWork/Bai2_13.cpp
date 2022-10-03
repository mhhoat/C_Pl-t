#include<stdio.h>
#include<math.h>
long giaiThua(long a){
	long s=1;
	for(long i=1;i<=a;i++){
		s*=i;
	}
	return s;
}
long chinhHop(long k,long n){
	return giaiThua(n)/(giaiThua(n-k)*giaiThua(k));
}
int main(){
	long k,n;
	do{
		scanf("%ld%ld",&k,&n);
	}while(!(0<=k&&k<=n&&n<=15));
	printf("%ld",chinhHop(k,n));
}
