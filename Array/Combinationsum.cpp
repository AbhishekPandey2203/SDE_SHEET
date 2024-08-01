#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>>& ans, vector<int>& p, int indx, int n, int target, vector<int>& arr) {
    // base case
    if(target == 0) {
        ans.push_back(p);
        return;
    }
    // handling the exceptional condition
    if(indx == n || target < 0)
        return;

    // using the pick or not pick approach
    // let pick 
    p.push_back(arr[indx]);
    solve(ans, p, indx, n, target - arr[indx], arr);
    p.pop_back(); // backtrack

    // not pick
    solve(ans, p, indx + 1, n, target, arr);
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
