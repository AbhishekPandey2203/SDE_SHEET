#include<bits/stdc++.h>
using namespace std;

int findpivotindx(int low, int high, vector<int>& nums)
{
    int pivot = nums[low];
    int i = low + 1;
    int j = high;

    while (i <= j)
    {
        while (i <= high && nums[i] <= pivot) i++;
        while (j >= low && nums[j] > pivot) j--;

        if (i < j)
            swap(nums[i], nums[j]);
    }

    swap(nums[low], nums[j]);
    return j;
}

void quicksort(int low, int high, vector<int>& nums)
{
    if (low < high)
    {
        int pivotindx = findpivotindx(low, high, nums);
        quicksort(low, pivotindx - 1, nums);
        quicksort(pivotindx + 1, high, nums);
    }
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    vector<int> nums(n); // resize the vector to hold n elements

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    quicksort(0, n - 1, nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
