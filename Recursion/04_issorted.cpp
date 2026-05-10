#include <iostream>
using namespace std;

bool isSorted(int arr[],int n){
    if(n == 0 || n == 1){
        return true;
    }

   if(arr[n-1] < arr[n-2]){
    return false;
   }
   return isSorted(arr,n-1);
}

int main()
{
   int arr[5] = {1,8,3,4,5};
   int n = 5;
  if(isSorted(arr,n)){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
    return 0;
}