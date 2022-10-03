#include<stdio.h>
int main(){
	long arr[2];
	scanf("%ld%ld",&arr[0],&arr[1]);
	long max=arr[0];
	for(int i=0;i<2;i++){
		if(arr[i]>max)max=arr[i];
	}
	printf("%ld",max);
}
