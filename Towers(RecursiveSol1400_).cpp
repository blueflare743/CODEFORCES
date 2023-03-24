#include <iostream>
#include <vector> 
#include <array> 
#include <map> 
#include <set> 
#include <algorithm> 
#include <math.h> 
using namespace std;
void solve(vector<int> &nums,vector<int> &copy,  int n, int i, string s, int k){
  
  sort(nums.begin(), nums.end());
  if(nums[n - 1] - nums[0]  == 0 ||nums[n - 1] - nums[0]  == 1 || i == k){
    cout << nums[n - 1] - nums[0] << " ";
    cout << i << endl;
    cout << s << endl;
    
  } else {
    for(int j  = 0; j < nums.size(); j++) {if(nums[n -1] == copy[j]) {copy[j]--;s += to_string(j +1) + " "; break;}
                                          }
  
    for(int j = 0;j < copy.size(); j++){if(nums[0] == copy[j]){ copy[j]++; s += to_string(j + 1) + "\n"; break;}}
    nums[n - 1]--;
    nums[0]++;
    
    
    solve(nums, copy, n, i +1, s, k);
  }
}
int main() {
  int n, k;
  string s = "";
  string ans;
  cin >> n; cin >> k;
  vector<int> nums;
  vector<int> copy;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    nums.push_back(a);
    copy.push_back(a);
  }
  solve(nums, copy, n, 0, s, k);
  //cout << ans << endl;
  
}