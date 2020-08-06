#include <iostream>

using namespace std;

int main()
{
    string message, airport;
    int length;

    getline(cin, message);

    length = message.length();

    for (int i = 0; i < length; i++)
    {
        if (message[i] == 'a' || message[i] == 'A')
        {
            for (int j = i; j < length; j++)
            {
                if (message[j] == 'a' || message[j] == 'A')
                {
                    for (int k = j; k < length; k++)
                    {
                        if (message[k] == 'n' || message[k] == 'N')
                        {
                            airport = "AAN";
                        }
                    }
                }
                else if (message[j] == 'u' || message[j] == 'U')
                {
                    for (int k = j; k < length; k++)
                    {
                        if (message[k] == 'h' || message[k] == 'H')
                        {
                            airport = "AUH";
                            break;
                        }
                    }
                }
            }
        }
        else if (message[i] == 'd' || message[i] == 'D')
        {
            for (int j = i; j < length; j++)
            {
                if (message[j] == 'w' || message[j] == 'W')
                {
                    for (int k = j; k < length; k++)
                    {
                        if (message[k] == 'c' || message[k] == 'C')
                        {
                            airport = "DWC";
                        }
                    }
                }
                else if (message[j] == 'x' || message[j] == 'X')
                {
                    for (int k = j; k < length; k++)
                    {
                        if (message[k] == 'b' || message[k] == 'B')
                        {
                            airport = "DXB";
                        }
                    }
                }
            }
        }
        else if (message[i] == 'f' || message[i] == 'F')
        {
            for (int j = i; j < length; j++)
            {
                if (message[j] == 'j' || message[j] == 'J')
                {
                    for (int k = j; k < length; k++)
                    {
                        if (message[k] == 'r' || message[k] == 'R')
                        {
                            airport = "FJR";
                        }
                    }
                }
            }
        } 
        else if (message[i] == 'r' || message[i] == 'R')
        {
            for (int j = i; j < length; j++)
            {
                if (message[j] == 'k' || message[j] == 'K')
                {
                    for (int k = j; k < length; k++)
                    {
                        if (message[k] == 't' || message[k] == 'T')
                        {
                            airport = "RKT";
                        }
                    }
                }
            }
        }
        else if (message[i] == 's' || message[i] == 'S')
        {
            for (int j = i; j < length; j++)
            {
                if (message[j] == 'h' || message[j] == 'H')
                {
                    for (int k = j; k < length; k++)
                    {
                        if (message[k] == 'j' || message[k] == 'J')
                        {
                            airport = "SHJ";
                        }
                    }
                }
            }
        }
        else if (message[i] == 'x' || message[i] == 'X')
        {
            for (int j = i; j < length; j++)
            {
                if (message[j] == 's' || message[j] == 'S')
                {
                    for (int k = j; k < length; k++)
                    {
                        if (message[k] == 'b' || message[k] == 'B')
                        {
                            airport = "XSB";
                        }
                    }
                }
            }
        }   
    }

    cout << airport << endl;

    return 0;
}