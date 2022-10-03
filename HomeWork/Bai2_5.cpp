#include<stdio.h>
long soNgayTrongThang(long m,long y){
	switch(m){
		case 1:	
		case 3:
		case 5:
		case 7:
		case 8:
		 case 10:
		 case 12: 
		return 31;
		
		
	    case 2:  
	    		if(y%4==0&&y%100!=0||y%400==0)return 28;
	    	else return 29;
		case 4:
		 case 6:
		  case 9: 
		  case 11:
			 return 30;
		default: return 0; break;
							
	}
}
int main(){
	long m,y;
	scanf("%ld",&m);
	if(0<m&&m<12){
		if(m==2){
		scanf("%ld",&y);
		printf("%ld",soNgayTrongThang(m,2));}
		else{
			printf("%ld",soNgayTrongThang(m,2021));	
		}
	
	}
	else printf("NOT FOUND");
}
