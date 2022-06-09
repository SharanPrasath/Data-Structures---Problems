#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

vector<vector<int>> triplets(vector<int> arr,int sum){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>> result;
    
    for(int i=0;i<=n-3;i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
            int curr_sum = arr[i];
            curr_sum += arr[j];
            curr_sum += arr[k];
            
            if(curr_sum == sum){
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(curr_sum<sum){
                j++;
            }
            else {
                k--;
            }
        }
    }
    return result;
    
}


int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,25};
    int s = 18;
    auto result = triplets(arr,s);
    for(auto v : result){
        for (auto x : v){
            cout<<x<<",";
        }
        cout<<endl;
    }
}
//#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

vector<vector<int>> triplets(vector<int> arr,int sum){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<vector<int>> result;
    
    for(int i=0;i<=n-3;i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
            int curr_sum = arr[i];
            curr_sum += arr[j];
            curr_sum += arr[k];
            
            if(curr_sum == sum){
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(curr_sum<sum){
                j++;
            }
            else {
                k--;
            }
        }
    }
    return result;
    
}


int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,25};
    int s = 18;
    auto result = triplets(arr,s);
    for(auto v : result){
        for (auto x : v){
            cout<<x<<",";
        }
        cout<<endl;
    }
}
//output
// 1,8,9,
// 2,7,9,
// 3,6,9,
// 3,7,8,
// 4,5,9,
// 4,6,8,
// 5,6,7,

