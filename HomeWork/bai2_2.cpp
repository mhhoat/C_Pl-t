#include<stdio.h>
int main(){
	int arr[3];
	scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
	int max=arr[0];
	for(int i=0;i<3;i++){
		if(arr[i]>max)max=arr[i];
	}
	printf("%d",max);
}
