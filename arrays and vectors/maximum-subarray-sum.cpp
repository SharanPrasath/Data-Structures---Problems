#include <iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int> arr){
    int n = arr.size();
    int largestSum = -30000;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
        if(largestSum < sum){
            largestSum = sum;
        }
        if(sum < 0)
        sum = 0;
        
    }
    return largestSum;
}


int main()
{
    vector<int> arr = {-1,2,3,4,-2,6,-8,3};
    cout<<maxSubArray(arr);
    return 0;
}
