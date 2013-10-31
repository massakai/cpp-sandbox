#include <iostream>
#include "Example.hpp"

int main(int argc, char **argv) {
    Example example;
    
    std::cout << "example.GetValue() = " << example.GetValue() << std::endl;

    example.SetValue(10);
    std::cout << "example.GetValue() = " << example.GetValue() << std::endl;
    std::cout << "example.Add(100) = " << example.Add(100) << std::endl;
  
    return 0;
}
