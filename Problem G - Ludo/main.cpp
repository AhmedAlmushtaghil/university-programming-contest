#include <iostream>

using namespace std;

int main()
{
    int steps, dice_one, dice_two, dice_min, dice_max;

    cin >> steps;

    while (1)
    {
        cin >> dice_one >> dice_two;

        // Check for game end
        if (dice_one == 0 && dice_two == 0)
        {
            break;
        }

        // Get Min and Max dices
        if (dice_one >= dice_two)
        {
            dice_max = dice_one;
            dice_min = dice_two;
        }
        else
        {
            dice_max = dice_two;
            dice_min = dice_one;
        }

        // Sum of dices check
        if ((dice_one + dice_two) > steps)
        {
            // Max dice check
            if (dice_max > steps)
            {
                // Min dice check
                if (dice_min > steps)
                {
                    continue;
                }
                else
                {
                    steps -= dice_min;
                }
            }
            else
            {
                steps -= dice_max;
            }
        }
        else
        {
            steps -= (dice_one + dice_two);
        }
    }

    cout << steps;

    return 0;
}