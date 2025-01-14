#include <iostream>

import MathLib;

int main()
{
   MathLib::Addition adder;
   auto result = adder.Add(1, 2);
    std::cout << "Result of 1+2: " << result << "\n";
}