#include<stdio.h>
int main()
{
  int n;
  float S;
  S = 0;
  do
  {
   
    scanf("%d", &n);
  }while(n < 1);
  //tính bi?u th?c b?ng vòng l?p for
  for(int i = 1; i <= n; i++){
    S = S + 1.0 / i;
  }
   printf("%.6f",S);
  }
