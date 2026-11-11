/*
Задача 1. Първо липсващо число
Даден ви е масив с N естествени числа, които потенциално могат да бъдат много големи. 
Пита се кое е първото естествено число, което не фигурира в масива. 
За тази задача приемете, че естествените числа са целите, положителни числа. 
Опишете алгоритъм и напишете програма.
*/

#include <iostream>
#include <vector>

using namespace std;
 
int findFirstMissingPositive(vector<long long>& nums) {
    int n = nums.size();

    for (int i = 0; i < n; ++i)
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i])
            swap(nums[i], nums[nums[i] - 1]);

    for (int i = 0; i < n; ++i)
        if (nums[i] != i + 1)
            return i + 1;

    return n + 1;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<long long> nums(n);
    cout << "Enter array elements: " << endl;
    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    int result = findFirstMissingPositive(nums);
    cout << "First missing number: " << result << endl;

    return 0;
}
