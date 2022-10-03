#include<stdio.h>
long UCLN(long a,long b){
    long r;
	while(true){
		  r=a%b;
		if(r==0) return b;
		else{
			a=b;
			b=r;
		}
	}
	
	}
	long BCNN(long a,long b){
	return (a*b)/UCLN(a,b);	
	}
	int main(){
		long a,b;
		scanf("%ld%ld",&a,&b);
		printf("%ld %ld",UCLN(a,b),BCNN(a,b));
	}
