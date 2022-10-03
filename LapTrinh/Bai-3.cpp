#include<stdio.h>
bool input(int *arr[][100],int m , int k){
  
   if(!(m>0&&m<800&&k<=40))return false;
   for(int i=0;i<m;i++){
   	for(int j=0;j<m;j++){
   		scanf("%ld",arr[i][j]);
	   }
   }
} 
bool check(int x , int y, int arr[800][800],int k){// x la vi trih hang bat dau duyet
// y la vi tri bat dau duyet theo cot.
// arr la mang tham chieu
// k la do dai mang con can duyet
	for(int m=x;m<m+k-1;m++){
		for(int n=y;n<n+k-1;n++){
			if(arr[m][n]==0) return false;
		}
	}
	return true;
}
int main(){
	int m,k,arr[800][800];
	scanf("%d%d",&m,&k);

// if(!(m>0&&m<800&&k<=40)) {
// 	printf("-1");
// 	return 0;
// };
   for(int i=0;i<m;i++){
   	for(int j=0;j<m;j++){
   		scanf("%d",&arr[i][j]);
	   }
   }
   
    int count=0;
    for(int i=0;i<m-k+1;i++){
    	for(int j=0;j<m-k+1;j++){
    		if(check(j,i,arr,k)==true)count++;
		}
	}
	
	printf("%d",count);
    
}

