
 
#include <stdio.h>
#include <math.h>
 
int main(){
    long n;

    scanf("%ld", &n);
    if(n < 2){
                printf("FALSE" );
        return 0;
    }
    int count = 0;
    for(long i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("TRUE");
    }else{
        printf("FALSE" );
    }
}
