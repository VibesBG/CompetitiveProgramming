/*
Задача 2. Липсващо число в сортиран масив
Даден ви е сортиран масив с  N  числа между 0 и  N, включително, без повтарящи се числа, сортирани в нарастващ ред. 
Как бихте намерили липсващото число? Опишете алгоритъм и напишете програма.
*/

#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(const vector<int>& nums) {
    int low = 0;
    int high = nums.size();

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == mid) 
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main() {
    vector<int> nums = { 0, 1, 2, 4, 5 };

    cout << "Missing number: " << findMissingNumber(nums) << endl;

    return 0;
}
