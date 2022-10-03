#include<stdio.h>
int input( int *m,int *n){
	scanf("%d%d",m,n);// m hang n cot

	if((1<*m && *m<100) &&(1<*n && *n<100)  ) return 1;
	else return 0;
}

int main(){
	int m,n,o;
	o=input(&m,&n);
	if(o==0)printf("-1");
	else{
		long arr[m][n];
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%ld",&arr[i][j]);
			}
		
		}
		long arr2[m], k=0,maxArr;// maxArr la gia tri lon nhat moi cot
			for(int i=0;i<m;i++){//m hang
			 maxArr=arr[i][k];// gán max moi cot la phan tu dau tien cua cot.
			for(int j=0;j<n;j++){//n cot
				if(maxArr<arr[i][j]){
					maxArr=arr[i][j];// luu bien
					arr2[i]=maxArr;
				}
			}
			k++;
		}
	  long minOut=arr2[0];
	  for(int i=0;i<m;i++){
	  	if(minOut>arr2[i])minOut=arr2[i];
	  }
	  printf("%ld",minOut);
	}
}
