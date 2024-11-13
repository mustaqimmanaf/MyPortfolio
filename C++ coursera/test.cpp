#include <iostream>


void testCode()
{
    std::cout << "Type your number" << std::endl;

    int x ;
    std::cin >> x;


    std::cout << "You typed: "<< x << std::endl;

   
}

/** compute the average of x and y */
float average(float x, float y)
{
    return (x+y)/2;
}
int main() 
{
    float z = average(4,6); 
    std::cout << z << std::endl;
    return 0;
}
