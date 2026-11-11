#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    const int MAX = 100000;
    int N;
    cin >> N;

    int p[MAX];
    int result[MAX];

    for (int i = 0; i < N; i++)
        cin >> p[i];

    stack<int> st;

    for (int i = 0; i < N; i++) 
    {
        while (!st.empty() && p[st.top()] >= p[i])
            st.pop();

        if (!st.empty())
            result[i] = st.top() + 1;
        else
            result[i] = 0;

        st.push(i);
    }

    for (int i = 0; i < N; i++)
        cout << result[i] << " ";

    return 0;
}
