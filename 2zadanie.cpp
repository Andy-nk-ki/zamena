#include <iostream>

void swap(int& var1,int& var2)
{
    int* ptr1=&var1;
    int* ptr2=&var2;
    int con=var1;
    *ptr1=*ptr2;
    *ptr2=con;
}



int main()
{
    int a=8;
    int b=5;
    std::cout<<"a= " << a << " b= " << b << std::endl;
    swap(a,b);
    std::cout<<"a= " << a << " b= " << b << std::endl;
    return EXIT_SUCCESS;
}