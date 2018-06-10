//programa que calcula el volumen de una esfera xd
#include <iostream>
#include <cmath>

double vol(double a)

{ 
  double x, r;
  std::cout <<"Ingrese el radio: " << std::endl;
  std::cin >> r;
 
  x =((4)*(M_PI)*(pow(r,3)))/3;

  return x;
}

int main()
{ 
  double y;

  y = vol(y);

  std::cout <<"el volumen de la esfera es: "<< y <<" unidades cúbicas" << std::endl;

  return 0;
}
