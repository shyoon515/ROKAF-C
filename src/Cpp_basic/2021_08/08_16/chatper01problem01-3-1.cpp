#include <iostream>

int BoxVolume(void)
{
    return 1;
}

int BoxVolume(int length)
{
    return length;
}

int BoxVolume(int length, int width)
{
    return length*width;
}

int BoxVolume(int length, int width, int height)
{
    return length*width*height;
}

int main(void)
{
    std::cout<<"[3, 3, 3] : "<<BoxVolume(3, 3, 3)<<std::endl;
    std::cout<<"[5, 5, D] : "<<BoxVolume(5, 5)<<std::endl;
    std::cout<<"[7, D, D] : "<<BoxVolume(7)<<std::endl;
    std::cout<<"[D, D, D] : "<<BoxVolume()<<std::endl;
    return 0;
}