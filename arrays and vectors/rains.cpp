
#include <iostream>
#include<vector>
using namespace std;

int trappedWater(vector<int> heights){
    int n= heights.size();
    if(n<=2){
        return 0;
    }
    
    vector<int> left(n,0),right(n,0);

    left[0] = heights[0];
    right[n-1] = heights[n-1];
    
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],heights[i]);
        right[n-i-1] = max(right[n-i], heights[n-i-1]);
        
    }
    
    int result = 0;
    
    for(int j = 0;j<n;j++){
        result += min(right[j],left[j]) - heights[j];
    }
    return result;
}

int main()
{
    vector<int> water = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trappedWater(water)<<endl;

    return 0;
}
