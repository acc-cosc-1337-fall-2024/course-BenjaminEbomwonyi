//write include statement for switch header
#include "switch.h"

//Write code for function that accepts a num and returns a string 
//as follows:
//returns 'Option 1' when value 1
//returns 'Option 2' when value 2
//returns 'Option 3' when value 3
//returns 'Option 4' when value 4
//return 'Invalid Option' otherwise

std::string menu_options(int num)
{
    auto option = "";

    switch (num)
    {
    case 1:
        option = "option 1";
        break;
    case 2:
        option = "option 2";
        break;
    case 3:
        option = "option 3";
        break;
    case 4:
        option = "option 4";
        break;
    default:
        option = "invalid option";
        break;
    }
}