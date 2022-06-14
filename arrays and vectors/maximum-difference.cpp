
#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include <cstdlib>
using namespace std;

pair<int,int> maximumDifference(vector<int> arr1,vector<int> arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    int maxDiff = INT_MAX;
    int num1 = 0;
    int num2 = 0;
    for(int i=0;i<n1;i++){
        for(int j = 0;j<n2;j++){
            if(abs(arr1[i] - arr2[j]) < maxDiff ){
                num1 = arr1[i];
                num2 = arr2[j];
                maxDiff = abs(num1 - num2);
            }
        }
    }
    return {num1,num2};
}

int main()
{
    vector<int> arr1 = {23,5,10,17,30};
    vector<int> arr2  = {26,134,135,14,19};
    pair<int,int> res;
    res = maximumDifference(arr1,arr2);
    cout<<res.first<<" "<<res.second;
    return 0;
}
