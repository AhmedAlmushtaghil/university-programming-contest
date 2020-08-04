# include <iostream>

using namespace std;

int main()
{
    int temp[31];
    bool flag = false;

    for (int i = 0; i < 31; i++)
    {
        cin >> temp[i];
    }

    for (int i = 0; i < 30; i++)
    {
        if (temp[i] >= temp[i+1] && temp[30] < 0)
            flag = true;
        else
        {
            flag = false; 
            break;
        }
    }

    flag ? cout << "Yes" : cout << "No";

    return 0;
}