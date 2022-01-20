#include <iostream>

void increase_float(float& input)
{
    input ++;
} 

int main()
{

    std::cout<< "hello reference" << std::endl;

    // 1. define a reference
    float a = 8.0f;

    float& ref_a = a;

    // 2. maipulate the variable through reference
    std::cout<< "before ref manipulation, a is " << a << std::endl;

    // change a through reference
    ref_a = 4.0f;

    std::cout<< "after ref manipulation, a is " << ref_a << std::endl;

    // 3. use reference in function defination
    increase_float(a);
    std::cout<< "after increase_int function, a is " << ref_a << std::endl;

    return 1;
}