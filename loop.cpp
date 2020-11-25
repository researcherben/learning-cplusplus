// Header file for input output functions 
// "#" gets read by preprocessor
#include <iostream>  
  
// main function - 
// where the execution of program begins 
int main() 
{
    // https://www.w3schools.com/cpp/cpp_arrays_loop.asp	

    // if "std::" isn't prefixed, 
    // error: ‘string’ was not declared in this scope
    std::string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    for(int i = 0; i < 4; i++) {
        std::cout << cars[i] << "\n";
    } 
      
    return 0; 
} 

