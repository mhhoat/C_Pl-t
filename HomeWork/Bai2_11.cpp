#include<stdio.h>
#include<string.h>
#include <cstdlib>-
char* thienCan(char y){

    switch(y){
    	case '0': return "Canh";
    	case '1': return "Tân";
    	case '2': return "Nhâm";
    	case '3': return "Quy";
    	case '4': return "Giáp";
    	case '5' :return "At";
    	case '6': return "Bính";
    	case '7': return "Ðinh";
    	case '8': return "Mau";
    	case '9': return "Ky";
    	default: return "Error";
	}
}
char* diaChi(long y){
  int d=y%12;
	switch(d){
		case 0: return "Thân";
    	case 1: return "Dâu";
    	case 2: return "Tuât";
    	case 3: return "Hoi";
    	case 4: return "Ty";
    	case 5 :return "Suu";
    	case 6: return "Dân";
    	case 7: return "Mão";
    	case 8: return "Thin";
    	case 9: return "Ti";
		case 10: return "Ngo";
		case 11: return "Mui";
		default : return "Error";	
	}
	}
int main(){
	char y[4];
	scanf("%s",&y);
    long Y=atoi(y);
	printf("%s %s",thienCan(y[3]),diaChi(Y));
}
