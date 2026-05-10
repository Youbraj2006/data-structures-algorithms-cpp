#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void getSubarray(vector<int> &arr , vector<int> &ans , int i , vector<vector<int>> &subArray){
    if(i == arr.size()){
    subArray.push_back(ans);
    return;
    }

    //include
ans.push_back(arr[i]);
getSubarray(arr,ans,i+1 , subArray);

ans.pop_back();

int index = i+1;
while (index < arr.size() && arr[index] == arr[index-1]){
    index++;
}
getSubarray(arr,ans,index , subArray);
}
vector<vector<int>>subSet(vector<int> &arr){
  
  vector<vector<int>>subArray;
  vector<int>ans;

  getSubarray(arr, ans, 0, subArray);
  return subArray;

}

int main(){
    vector<int>arr = {1,2,2};
    vector<vector<int>>result = subSet(arr);
     sort(result.begin(), result.end());
    for(auto subSet : result){
        if(subSet.empty()){
            cout<<"{}";

        }
        else{
            for(int val : subSet){
cout<<val << " ";
            }
        }
        cout<<endl;
    }
    return 0;
}
