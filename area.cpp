// programa que calcula el area de una triangulo usando funciones
#include <iostream>

float area(float)
{
  float x, a, b;
  
  std::cout << "ingresar una base: " << std::endl; 
  std::cin >> a;
  std::cout << "ingresar una altura: " << std::endl;
  std::cin >> b;

  x = (a*b)/2;

  return x; 
}


int main() 
{
  float y; 

  y = area(y);
  
  std::cout << "el area del triangulo es: " << y << " unidades cuadradas" << std::endl;

  return 0;
}
