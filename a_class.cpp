// Header file for input output functions 
// "#" gets read by preprocessor
#include <iostream>  

using namespace std;

// https://www.w3schools.com/cpp/cpp_classes.asp
// see also https://www.cplusplus.com/doc/tutorial/classes/
class MyClass {       // The class
  // By default, all members of a class declared with 
  // the class keyword have private access for all its members. 
  // Therefore, any member that is declared before any 
  // other access specifier has private access automatically.
      
 public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)

    // Member Functions()
    void printname()
    {
       cout << "name is: " << myString << "\n";
    }

};

// main function - 
// where the execution of program begins 
int main() 
{

  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString << "\n";
  
  myObj.printname(); 


  return 0; 
} 

