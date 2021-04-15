#include <iostream>

int main() {
    // Input
    int intNumberOne = 0;
    int intNumberTwo = 0;
    int intSum = 0;
    double intDiff;
    int intMulti = 0;
    double intRatio;

    // Enter Values in Variables
    std::cout << "Please enter two integers" << std::endl;
    std::cin >>intNumberOne>>intNumberTwo;
    
    //Processing
    if (intNumberOne>intNumberTwo)
    std::cout << "Smallest = "<<intNumberTwo<< std::endl;
    else
    std::cout << "Smallest = "<<intNumberOne<< std::endl;

    if (intNumberOne<intNumberTwo)
    std::cout << "Largest = "<<intNumberTwo<< std::endl;
    else
    std::cout << "Largest = "<<intNumberOne<< std::endl;

    intSum = intNumberOne + intNumberTwo;

    if (intNumberOne>intNumberTwo)
    intDiff = intNumberOne - intNumberTwo;
    if (intNumberOne<intNumberTwo)
    intDiff = intNumberTwo - intNumberOne;

    intMulti = intNumberOne * intNumberTwo;

    if (intNumberTwo > intNumberOne)
    intRatio = (intNumberTwo / intNumberOne);
    if (intNumberTwo < intNumberOne)
    intRatio = (intNumberOne / intNumberTwo);

    // Output
    std::cout << "Sum = "<<intSum<< std::endl;
    std::cout << "Difference = "<<intDiff<< std::endl;
    std::cout << "Product = "<<intMulti<< std::endl;    
    std::cout << "Ratio = "<< intRatio<< std::endl;
}