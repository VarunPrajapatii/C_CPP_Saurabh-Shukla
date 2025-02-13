/*      Sum of all subsets

#include <iostream>
#include <vector>

using namespace std;

void subsetSum(vector<int> &arr, int index, int sum, vector<int> &ans) {
    if(index == arr.size()) {
        ans.push_back(sum);
        return;
    }

    subsetSum(arr, index+1, sum, ans);
    sum+=arr[index];
    subsetSum(arr, index+1, sum , ans);
}


int main() {
    vector<int> arr = {3,4,5};
    vector<int> ans;
    cout<<"varun ";
    subsetSum(arr, 0, 0, ans);
    for(int i=0; i<ans.size(); i++) {
        cout<<ans[i]<<" ";
    }
    cout<<"varun ";

    return 0;
}

*/






/*              TARGET SUM

#include <iostream>
#include <vector>

using namespace std;

void targetSum(vector<int> &arr, vector<vector<int>> &ans, vector<int> &temp, int index, int target) {
    if(target == 0) {
        ans.push_back(temp);
        return;
    }
    if(index == arr.size() || target<0) {
        return;
    }

    targetSum(arr, ans, temp, index+1, target);
    temp.push_back(arr[index]);
    targetSum(arr, ans, temp, index+1, target-arr[index]);
    temp.pop_back();
}

int main() {
    vector<int> arr = {65,8,7,11,1,6,5,10,2,8,4,9};
    vector<vector<int>> ans;
    vector<int> temp;
    targetSum(arr, ans, temp, 0, 12);
    for(int i=0; i<ans.size(); i++) {
        for(int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

*/




/*          PERFECT SUM

#include<bits/stdc++.h>

using namespace std;

int perfectSum(vector<int> &arr, int index, int target) {
    if(index == arr.size()) {
        return target==0;
    }
    

    return perfectSum(arr, index+1, target) + perfectSum(arr, index+1, target-arr[index]);
}

int main() {
    vector<int> arr={2,5,6,1, 0};
    int count = perfectSum(arr, 0, 8);
    cout<<count;


    return 0;
}

*/



/*          TARGET SUM WITH REPETITION

#include<bits/stdc++.h>
using namespace std;

int targetSum(vector<int> &arr, int index, int target) {
    if(target == 0) return 1;
    if(target<0 || index == arr.size()) return 0;

    return targetSum(arr, index, target-arr[index]) + targetSum(arr, index+1, target);
}

int main() {
    vector<int> arr={2,3,4};
    cout<<targetSum(arr, 0, 6);
    return 0;
}


*/




/*          PERMUTATION OF ARRAY

#include<bits/stdc++.h>
using namespace std;

void permute(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited) {
    if(visited.size() == temp.size()) {
        ans.push_back(temp);
        return;
    }
    for(int i=0; i<visited.size(); i++) {
        if(visited[i] == 0) {
            visited[i]=1;
            temp.push_back(arr[i]);
            permute(arr, ans, temp, visited);
            visited[i]=0;
            temp.pop_back();
        }
    }
}

int main() {
    int arr[] = {1,2,3,4};
    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(4,0);

    permute(arr, ans, temp, visited);
    for(int i=0; i<ans.size(); i++) {
        cout<<"{ ";
        for(int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<", ";
        }
        cout<<" }"<<endl;
    }
    return 0;
}

*/






/*          PERMUTATION OF ARRAY WITHOUT EXTRA SPACE

#include<bits/stdc++.h>
using namespace std;

void permute(vector<int> &arr, vector<vector<int>> &ans, int index) {
    if(index == arr.size()) {
        ans.push_back(arr);
        return;
    }

    for(int i=index; i<arr.size(); i++) {
        swap(arr[index], arr[i]);
        permute(arr, ans, index+1);
        swap(arr[index], arr[i]);
    }
}

int main() {
    vector<int> arr = {1,2,3,4};
    vector<vector<int>> ans;

    permute(arr, ans, 0);
    for(int i=0; i<ans.size(); i++) {
        cout<<"{ ";
        for(int j=0; j<ans[i].size(); j++) {
            cout<<ans[i][j]<<", ";
        }
        cout<<" }"<<endl;
    }
    return 0;
}

*/





