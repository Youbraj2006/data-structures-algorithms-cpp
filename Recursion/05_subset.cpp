#include<iostream>
#include<vector>
using namespace std;

void subSet(vector<int>&arr, vector<int>&ans , int i , vector<vector<int>> &allSubset){
    if(i == arr.size()){
        allSubset.push_back(ans);
        return;
    }

    //include
    ans.push_back(arr[i]);
    subSet(arr,ans,i+1,allSubset);

    ans.pop_back();
      subSet(arr,ans,i+1,allSubset);
}
  vector<vector<int>> SubSet(vector<int>& arr){
    vector<vector<int>>allSubset;
    vector<int> temp;

    subSet(arr, temp, 0, allSubset);

    return allSubset;
}

int main(){

vector<int>arr = {1,2,3};
vector<vector<int>> result = SubSet(arr);
for(auto subSet : result){
    if(subSet.empty()){
     cout<<"{}";
    }
    else{
        for(int val : subSet){
            cout << val << " ";
        }
    }
    cout << endl;
}

    return 0;
}
//time compelexity is O(2^n × n)