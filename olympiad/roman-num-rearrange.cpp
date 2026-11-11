#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    vector<string> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};

    vector<string> ones = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    string input;
    while (cin >> input)
    {
        map<char, int> inputCount;

        for (char c : input)
            inputCount[c]++;

        bool found = false;
        for (int t = 0; t <= 9; t++)
        {
            for (int o = 0; o <= 9; o++)
            {
                string result = tens[t] + ones[o];


                map<char, int> currentCount;
                for (char c : result)
                    currentCount[c]++;

                if (currentCount == inputCount) {
                    cout << result << endl;
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
    }
}
