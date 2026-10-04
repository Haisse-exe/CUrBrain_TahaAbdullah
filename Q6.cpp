#include<iostream>
using namespace std;

int difference(int num, int A, int B)
{
    int countA{0}, countB{0}, digit{0};
    do{
        digit = num%10;
        if(digit == A)
        countA++;
        if (digit == B)
        countB++;
        num/=10;
    }
    while(num>0);
    return countA>countB ? countA-countB : countB-countA;
}

int main()
{
    int input{0}, digit1{0}, digit2{0};
    cout << "Enter a number: ";
    cin >> input;
    cout << "Enter a digit: ";
    cin >> digit1;
    cout << "Enter another digit: ";
    cin >> digit2;
    if (input<0 || digit1/10 !=0 || digit2/10 !=0 || digit1<0 || digit2<0)
    {
        cout << "Invalid Input.\nTry Again." << endl;
        return 1;
    }
    
    cout << difference(input,digit1,digit2) << endl;
    return 0;
}