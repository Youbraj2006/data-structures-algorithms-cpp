#include<iostream>
#include<vector>
using namespace std;

void getPermutation(vector<int> &arr , int index , vector<vector<int>> &ans){
    if(index == arr.size()){
        ans.push_back(arr);
        return ;
    }
    for(int i = index ; i < arr.size();i++){
        swap(arr[index] , arr[i]);
        getPermutation(arr,index + 1 , ans);
        swap(arr[i] , arr[index]);
    }
}
vector<vector<int>> permuate(vector<int>&arr){
    vector<vector<int>> ans;
    getPermutation(arr,0,ans);
    return ans;
}
int main(){
    vector<int>arr = {1,2,3};
    vector<vector<int>> result = permuate(arr);
for (auto per: result) {
        for (int val : per) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}