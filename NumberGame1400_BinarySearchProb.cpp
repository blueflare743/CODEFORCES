#include <iostream>
#include <vector> 
#include <array>
#include <fstream> 
#include <map> 
#include <set> 
#include <algorithm> 
using namespace std;

void solve(int n, vector<int> nums){
  vector<int> nums1;
  for(int num: nums){
    nums1.push_back(num);
  }
  sort(nums.begin(), nums.end());
  int bestCase;
  bool aliceTurn;
  int solution = 0;
  if(n % 2 == 0)  
    bestCase  = n / 2;
  else 
    bestCase = n / 2 + 1;
  for(int i = 1; i <= bestCase; i++){
    for(int  j = i; j >=1; j--){  
      aliceTurn = true;
      for(auto it = nums.rbegin(); it != nums.rend(); it++){
      int counter = 0;
        if(*it <= j && aliceTurn) {
          aliceTurn = false;
          nums.erase((it+1).base()); 
      }
      counter++;
      }
    // bob's turn
    nums[0] = nums[0] + j;
    sort(nums.begin(), nums.end());
    if(j == 1 && aliceTurn == false) {solution = max(i, solution);}
      
  }
    nums.clear();
    for(int num: nums1) nums.push_back(num);
    sort(nums.begin(), nums.end());
    }
  cout << solution << endl;
}
int main() {
  int t, n, num; cin >> t;
  vector<int> nums;
  while(t--){
    cin >> n;
    for(int i = 0; i < n; i++){
      cin >> num;
      nums.push_back(num);
      
    }
    solve (n, nums);
    nums.clear();
  }


  return 0;
}