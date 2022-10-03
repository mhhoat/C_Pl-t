#include<stdio.h>
bool input(long *arr[][]){
   int n,k;
   scanf("%d%d",&n,&k);
   if(!(n>0&&n<800&&k<=40))return false;
   for(int i=0;i<n;i++){
   	for(int j=0;j<n;j++){
   		scanf("%ld",arr[i][j]);
	   }
   }
}
