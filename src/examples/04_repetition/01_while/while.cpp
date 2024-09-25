#include "while.h"

using std::cout;

void display_hello(int num)
{
    while(num>0)
    {
        cout<<"hello\n";
        num--;
    }
}


int sum_of_squares(int num)
{
    auto total = 0;

    while(num > 0)
    {
        total += num * num;
        num--;
    }

    return total;
}
