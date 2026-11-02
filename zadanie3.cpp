#include <iostream>

void perev(int* spis,int sss)
{
    for(int i{0};i<sss/2;i++)
    {
        int con=spis[i];
        spis[i]=spis[sss-1-i];
        spis[sss-1-i]=con;
    }
    
}

int main()
{
    int const stolb=7;
    int massiv[stolb]={22,33,44,78,45,90,34};
    perev(massiv,stolb);
    for (int i=0;i<stolb;i++)
    {
        std::cout<< massiv[i] << " " ;
    }
    return EXIT_SUCCESS;
}