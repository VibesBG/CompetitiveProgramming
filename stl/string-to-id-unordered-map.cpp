#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    unordered_map<string, int> stringToId;
    vector<string> idToString;

    for (int i = 0; i < N; i++) 
    {
        string s;
        cin >> s;

        if (stringToId.find(s) == stringToId.end()) 
        {
            int id = stringToId.size();
            stringToId[s] = id;
            idToString.push_back(s);
        }
    }

    for (int i = 0; i < idToString.size(); i++)
        cout << i << " -> " << idToString[i] << endl;

    return 0;
}
