#include <iostream>
#include <cstdlib>


int main () 
{
    const size_t width=100;
    const size_t heigt=100;
    const size_t pixelDepth=3;
    unsigned char image[width*height*pixelDepth];

    for(size_t i=0; i<width*height*pixelDepth; ++i)
    {
        image[i]=255;
    }
    for(size_t i=0; i<width*height*pixelDepth; ++i)
    {
        stdd::cout<<image[i]<<' ';
    }
    
    return EXIT_SUCCESS;

}