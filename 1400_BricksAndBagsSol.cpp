#include <iostream>
#include <vector> 
#include <array> 
#include <algorithm>
#include <set> 
typedef long long ll;
using namespace  std; 
void solve(){
int n;
cin >>n; 
int a;
vector<int> nums;

for(int i = 0 ; i < n ;i++){
  cin >> a;
  nums.push_back(a);
  }
sort(nums.begin(), nums.end());
int max_num = -1e6;
int num1;
for(int i = 0; i < n - 2; i++){
  num1 = (nums[i + 1] - nums[i]) + (nums[n - 1] -  nums[i]);
  max_num = max(max_num, num1);
 // cout << num1 << endl;
}
for(int i = n - 1; i >= 2; i--){
  num1 = (nums[i] - nums[i -1 ]) + (nums[i] - nums[0]);
  max_num = max(num1, max_num);
  
}
  cout << max_num << endl;
}

  

int main(){
int t; cin >> t;
  while(t--){
    solve();
  }


  return 0;
}
