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
	long d, m,y;
 do{
 			scanf("%ld%ld%ld",&d,&m,&y);

 }while(y<=1900||y>=10000);
	  if(d==1&&m!=1){
	   	d=soNgayTrongThang(m-1,y);
	   	m--;
	   }
	   else if(d==1&&m==1){
	   	d=31;
	   	m=12;
	   	y--;
	   }
	   else d--;
	   printf("%ld %ld %ld",d,m,y);
}

