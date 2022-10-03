#include<stdio.h>
 #include<math.h>
void KiemTraTamGiac(long a, long b, long c)
{
	if(a + b <= c || a + c <= b ||  b + c <= a)
	{
		printf("NO");
	}
	else
	{
		float p=(float)(a+b+c)/2;
		float P=a+b+c;
		float s=(float)sqrt((float)p*(p-a)*(p-b)*(p-c));
		printf("%.2f %.2f",P,s);
	}
	
}
 
int main()
{
	long a, b, c;
	scanf("%ld%ld%ld",&a,&b,&c);
 
	 KiemTraTamGiac(a, b, c);
 
 

	return 0;
}
