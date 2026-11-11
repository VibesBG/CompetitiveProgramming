#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int N; // number of buildings
    int H; // tower height
    cin >> N >> H;

    int* arr = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    stack<int> st;
    int result = 0;
    
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < H)
        {
            while (!st.empty() && st.top() <= arr[i])
            {
                st.pop();
            }
            st.push(arr[i]);
        }
        
        if (st.size() > result)
        {
            result = st.size();
        }
    }
    
    while (!st.empty())
    {
        st.pop();
    }
    
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < H)
        {
            while (!st.empty() && st.top() <= arr[i])
            {
                st.pop();
            }
            st.push(arr[i]);
        }
    }
    
    if (st.size() > result)
    {
        result = st.size();
    }
    
    cout << result << endl;
    
    delete[] arr;
    return 0;
}

