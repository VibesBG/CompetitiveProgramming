/*
Задача 4. Най-големи числа, срещащи се поне два пъти
Дадена ви е редица от числа. Намерете двете най-големи от тях, които се срещат поне 2 пъти. 
Опишете алгоритъм и напишете програма.
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findTwoLargestRepeated(vector<int>& nums) {

    sort(nums.begin(), nums.end(), greater<int>());

    int foundCount = 0;
    cout << "Two biggest numbers that repeat: ";

    for (int i = 0; i < (int)nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            cout << nums[i] << " ";
            foundCount++;

            if (foundCount == 2) break;

            while (i < (int)nums.size() - 1 && nums[i] == nums[i + 1])
                i++;
        }
    }

    if (foundCount == 0)
        cout << "There are no repeated numbers";
    cout << endl;
}

int main() {
    vector<int> numbers = { 1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5, 5, 5, 5 };
    vector<int> nums = { 1, 2, 3, 4, 5 };

    findTwoLargestRepeated(numbers);
    findTwoLargestRepeated(nums);

    return 0;
}
