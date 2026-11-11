/*
Задача 3. Премахване на дубликати
Дадено ви е мултимножество от числа. Върнете множеството от същите числа, но без повторения. 
Разгледайте случая, в който началното множество е сортирано. Опишете алгоритъм и напишете програма.
*/

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int write_index = 1; 

    for (int i = 1; i < nums.size(); i++)
        if (nums[i] != nums[write_index - 1]) {
            nums[write_index] = nums[i];
            write_index++;
        }

    nums.resize(write_index);

    return write_index;
}

int main() {
    vector<int> nums = { 1, 1, 2, 2, 2, 3, 4, 4, 5, 5, 5 };

    int unique_count = removeDuplicates(nums);

    cout << "Array without duplicates: ";
    for (int i = 0; i < unique_count; i++)
        cout << nums[i] << " ";

    return 0;
}
