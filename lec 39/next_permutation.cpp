#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &nums, int s, int e)
{
    if(s==e) return;
    int *left = &nums[s];
    int *right = &nums[e];
    while (left < right)
    {
        swap(*left, *right);
        left++;
        right--;
    }
}

void print(vector<int> nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

void nextPermutation(vector<int> &nums)
{
    bool worked = 0;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] > nums[i - 1])
        {
            worked = 1;
            int maxi = i;
            cout << "found pivot at " << i-1 << " which is "<< nums[i-1] << " \n";
            for (int j = i + 1; j < nums.size(); j++)
            {
                cout << "entered for loop \n";
                if (nums[j] > nums[i - 1])
                {
                    cout << "found numb greater than pivot and less than its succesor \n";
                    maxi = min(maxi, nums[j]);
                }
            }
            print(nums);
            cout << " swapping " << maxi << " and " << nums[i-1] << " \n";
            swap(nums[i-1],nums[maxi]);
            cout << "after swap\n";
            print(nums);
            reverse(nums, i, nums.size() - 1);
            cout << "after swap and reverse \n";
            print(nums);
        }
    }
    if (!worked)
    {
        reverse(nums, 0, nums.size() - 1);
    }
}

int main()
{
    vector<int> nums = {3,1,2};
    nextPermutation(nums);
    print(nums);

    return 0;
}