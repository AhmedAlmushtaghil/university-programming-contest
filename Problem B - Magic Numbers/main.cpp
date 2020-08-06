#include <iostream> 
#include <string> 

using namespace std;

int main()
{

    // Initialize variables
    int number, digits, num[4], steps;
    string num_str, str_num[4];

    cin >> number;

    digits = to_string(number).length();

    num_str = to_string(number);

    for (int i = 0; i < digits; i++)
    {
        str_num[i] = num_str[i];
        num[i] = stoi(str_num[i]);
    }

    

    return 0;
}