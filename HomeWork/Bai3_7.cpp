#include<stdio.h>
int main(){
long a,d,p=0;
scanf("%ld",&a);
while(a!=0){
	d=a%10;
	p=10*p+d;
	a=a/10;
}	
printf("%ld",p);
}
