#include <stdio.h>
#include <stdlib.h>

int main(){

  int I;
  int II;
  int num1;
  int num2;
  Printf("Ingrese el primer valor");
  scanf("%d", &num1);
  printf("ingrese el segundo valor");
  scanf("&d", &num2);
  if(num1>num2)
  {
  for (num2=num2+1;num2<num1;num1++);
  printf ("\n Los Numeros intermedios son: %d", num2);
  }
  else
  {
  for (num1=num1+1;num1<num2;num1);
  printf ("\n Los Numeros intermedios son: %d", num1);
}

return 0;
