#include <iostream>
using namespace std;

int main()
{
    unsigned long long int number, answer = 1;
    while (cin >> number)
        answer *= number;
    cout << answer;
    return 0;
}