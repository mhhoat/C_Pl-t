#include<stdio.h>
#include<math.h>
bool chinhPhuong(long a){
	long d=sqrt(a);
	if(d*d==a)return true;
	else
	return false;
	
}
int main(){
	long a;
	scanf("%ld",&a);
	if(chinhPhuong(a))printf("Yes");
	else printf("No");
}
