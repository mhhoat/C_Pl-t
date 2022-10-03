#include<stdio.h>
#include<math.h>
int giaiPT(float a, float b, float c,float &x1, float &x2){
    float delta = b*b - 4*a*c;
    if(delta<0){
        x1=x2=0.0;
        return 0;
    }
    else if(delta==0){
        x1 = x2 = -b/(2*a);
        return 1;
    }
    else{
        delta = sqrt(delta);
        x1 = (-b + delta) / (2*a);
        x2 = (-b - delta) / (2*a);
        return 2;
    }
}
int main(){
    float a,b,c;
    float x1,x2;
     scanf("%f%f%f",&a,&b,&c);
        if(a==0&&b==0&&c==0) 
    {
    	printf("VSN");
    	return 0;
	}
    int numNo = giaiPT(a,b,c,x1,x2);
 
         if(numNo == 0) {
        printf("VN");
        return 0;
    }
    else if(numNo == 1){
        printf("x=%.2f",x1);
    }
    else{
        printf("%.2f %.2f",x1,x2);
    }
}
 
