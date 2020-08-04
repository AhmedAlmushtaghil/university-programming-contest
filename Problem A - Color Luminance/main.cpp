#include <iostream> 
# include <cmath> 

using namespace std;

int main()
{

    // Initialize variables
    int red, green, blue;
    double luminance;

    // Get input values
    cin >> red >> green >> blue;

    // Calculate luminance
    luminance = 0.5 * (max(max(red, green), blue) + min(min(red, green), blue));

    // Calculate percentage of luminance 
    luminance = floor((luminance / 255) * 100);

    // Output the result
    cout << luminance; 

    return 0;
}