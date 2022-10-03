#include<stdio.h>
int main(){
long a,d,p=0,a1;
scanf("%ld",&a);
a1=a;
while(a!=0){
	d=a%10;
	p=10*p+d;
	a=a/10;
}	
int s=p+a1;
printf("%ld",s);
}
