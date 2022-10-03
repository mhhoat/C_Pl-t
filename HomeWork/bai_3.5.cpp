#include<stdio.h>
bool check(long n){
    long sum = 0;//khai bao biem sum
    for(long i=1;i<=n/2;i++){
        if(n%i==0) 
            sum+=i;
    }
    if(sum==n) return true; // tra ve true
    return false;
}
int main(){
    long n;\

    scanf("%ld",&n);
    if(check(n) )
        printf("TRUE");
    else
        printf("FALSE");
    return 0;
}
