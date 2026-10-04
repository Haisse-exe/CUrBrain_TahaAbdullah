#include <iostream>
using namespace std;

// int Wrong_reverse_and_double(int num)
//{
// int digit{0}, remainder{0}, reverse{0};
// while (num != 0)
//    {
// digit = num % 10;
// if (digit > 4)
// reverse = reverse * 100 + digit * 2;
// else
// reverse = reverse * 10 + digit * 2;
// num /= 10;
//}
// return reverse;
//}

int reverse_and_double(int num)
{
    int reverse{0}, digit{0};
    while(num!=0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num/=10;
    }
    return (reverse * 2);
}

int main()
{
    int input{0};
//    printf("%d\n", reverse_and_double(66));
//    printf("%d\n", reverse_and_double(103));
//    printf("%d\n", reverse_and_double(-932));
//    printf("%d\n", reverse_and_double(0));
//    printf("%d\n", reverse_and_double(45));
//    printf("%d\n", reverse_and_double(54));
    cout << "Enter a number: ";
    cin >> input;
    cout << "OUTPUT: " << reverse_and_double(input) << endl;
}