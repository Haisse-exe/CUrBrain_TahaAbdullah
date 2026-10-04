#include <iostream>
using namespace std;

int difference(int num)
{
    int digit{0}, sum{0}, product{1};
    while(num>0)
    {
        digit = num%10;
        sum+=digit;
        product*=digit;
        num/=10;
    }
    return(product - sum);
}

int main()
{
    int input{0};
    cout << "Enter a positive number: ";
    cin >> input;
    if(input<=0)
    {
        cout << "Invalid Input.\nTry Again." << endl;
        return 1;
    }
    cout << difference(input) << endl;
}