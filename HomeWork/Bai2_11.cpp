#include<stdio.h>
#include<string.h>
#include <cstdlib>-
char* thienCan(char y){

    switch(y){
    	case '0': return "Canh";
    	case '1': return "T�n";
    	case '2': return "Nh�m";
    	case '3': return "Quy";
    	case '4': return "Gi�p";
    	case '5' :return "At";
    	case '6': return "B�nh";
    	case '7': return "�inh";
    	case '8': return "Mau";
    	case '9': return "Ky";
    	default: return "Error";
	}
}
char* diaChi(long y){
  int d=y%12;
	switch(d){
		case 0: return "Th�n";
    	case 1: return "D�u";
    	case 2: return "Tu�t";
    	case 3: return "Hoi";
    	case 4: return "Ty";
    	case 5 :return "Suu";
    	case 6: return "D�n";
    	case 7: return "M�o";
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
