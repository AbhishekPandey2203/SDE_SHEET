// solving the combinationsum2

#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& ans, vector<int>& p, int indx, int n, int target, vector<int>& arr) {
    // base case
    if(target == 0) {
        ans.push_back(p);
        return;
    }

    //using the logical concept of striver help us to understand

    //why using the loop bcz according to question we have to determine only the unique one pair not repeat

    for(int i=indx;i<n;i++)
    {
        //psble condition kab continue krna h

        if(i>indx && arr[i]==arr[i-1])continue;

        //break conditon

        if(arr[i]>target) break;

        //recursive call
        p.push_back(arr[i]);
         solve(ans, p, i + 1,n, target - arr[i], arr);
         p.pop_back();
    }

}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements in an array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // taking the target
    int target;
    cout << "Enter the target: ";
    cin >> target;

    // calling the function 
    vector<vector<int>> ans;
    vector<int> p;
    sort(arr.begin(),arr.end());
    solve(ans, p, 0, n, target, arr);

    // print 
    cout << "The response combinations are:" << endl;
    for(const auto& combination : ans) {
        for(int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
