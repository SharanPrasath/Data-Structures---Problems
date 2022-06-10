#include <iostream>
#include<vector>
using namespace std;
#include<algorithm>

int main()
{
    vector<int> arr{0,1,3,5,6,4,7,8,9};
    sort(arr.begin(),arr.end());
    int sum = 0;
    vector<int> a;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i+1]-arr[i] == 1){
            sum++;
        }
        else{
            a.push_back(sum+1);
           sum = 0;
        }
    }
    sort(a.begin(),a.end());
    for(auto n: a){
        std::cout << n << std::endl;
    }

    return 0;
}
