#include <stdio.h>
//Ham Ki?m tra s? nguyên t?
bool checkNT(int n)
{
    if(n<2) return false;//N?u n nh? 2 tr? ngay kq v? cho hàm là false
     
//Duy?t vòng l?p kt
    for(int i=2;i<n;i++){
        if(n % i == 0){
            return false; //N?u g?p tru?ng h?p n có th? chia h?t cho i thì tr? k?t qu? cho hàm là không ph?i s? NT
        }
        
    }
    return true;
}
    int main(){
    	long k,count=0,s=0;
    	float aver=0.000;
    	scanf("%ld",&k);
    	for(long i=1;i<=k;i++){
    		if(checkNT(i)){
    			s+=i;
    			count++;
			}
		}
		aver=(float)s/count;
		printf("%.3f",aver);
		
	}
