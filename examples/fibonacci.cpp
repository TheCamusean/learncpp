#include <iostream>

int w=0;
int fibonacci(int i)
{
  int f;

  f = i+w;
  w = i;
  return f;
}


int main()
{
  int x;
  std::cout << "Give me a ending value for Fibo:";
  std::cin >> x ;


  int y;
  int i;
  y=1;
  for(i=0;i<x+1;i+=1){

    y = fibonacci(y);

    std::cout << y;
    std::cout << ",";
  }








}
