#include <iostream>

#include "circle.h"

int main(int argc, char** argv)
{
   Circle c1; 
   Circle c2(10.0); 
   Circle c3 = c2;
   Circle c4 = c2 + c2;

   std::cout << "--------- Starting Values ----------\n";
   std::cout << "c1: " << c1 << std::endl;
   std::cout << "c2: " << c2 << std::endl;
   std::cout << "c3: " << c3 << std::endl;
   std::cout << "c4: " << c4 << std::endl;

   float area = c3.computeArea();
   std::cout << "Circle 3 has area: " << area << std::endl;

   c2 = c1;
   c1.setRadius(c3.getRadius() + 2);

   std::cout << "--------- Ending Values ----------\n";
   std::cout << "c1: " << c1 << std::endl;
   std::cout << "c2: " << c2 << std::endl;
   std::cout << "c3: " << c3 << std::endl;
   std::cout << "c4: " << c4 << std::endl;
}

