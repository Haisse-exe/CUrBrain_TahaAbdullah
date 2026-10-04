#include <iostream>
using namespace std;

int pallindrone_or_sum(int num)
{
    int digit{0}, reverse{0};
    int copy{num};
    while(num!=0)
    {
        digit = num % 10;
        reverse = reverse*10 + digit;
        num/=10;
    }
    if(reverse != copy || copy < 0)
    return(reverse + copy);
    else
    return(copy);
}

int main()
{
    int input{0};
    cout << "Enter a number: ";
    cin >> input;
    cout << pallindrone_or_sum(input) << endl;
}