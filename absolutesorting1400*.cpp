#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <array>
#include <string>
#include <fstream>
using namespace std;
int main(){
ofstream fout("t.out");
ifstream fin("t.in");
int t, n, a, lower, upper; 
cin >> t;
vector<int> nums;
for(int i = 0 ; i < t; i ++){
  lower = -2147483647; upper = 2147464783;
  cin >> n;
  for(int j = 0 ;j < n; j ++){
    cin >> a;
    nums.push_back(a);
  }
  for(int k = 0; k < n - 1 ;k++){
    if(nums[k]  > nums[k + 1]){
     //cout << (nums[k] + nums[k +1]) % 2;
      if((nums[k] + nums[k + 1]) % 2 == 0){ 
       // cout << "hello";
        if(lower <  (nums[k] + nums[k + 1]) / 2)
        lower = (nums[k] + nums[k + 1]) / 2;
        
      } else {
        
        if(lower <  ((nums[k] + nums[k + 1]) / 2 + 1))
        lower = (nums[k] + nums[k + 1]) / 2 + 1;
      }

    } else if( (nums[k] < nums[k + 1]) || (nums[k] < 0  && nums[k +1] < 0 )){
      if((nums[k] < 0  && nums[k +1] < 0 )){
        if((nums[k] + nums[k + 1]) % 2 == 0){
          if(upper >  (nums[k] + nums[k + 1]) / 2)
          upper = (nums[k] + nums[k + 1]) / 2;
        } else {
          if(upper >  (nums[k] + nums[k + 1]) / 2)
          upper = (nums[k] + nums[k + 1]) / 2 - 1;
          //cout << upper << endl;
        }
        } else {
        if(upper >  (nums[k] + nums[k + 1]) / 2)
        upper = (nums[k] + nums[k + 1]) / 2;
        }
    } else {
      
    }
  }
  if (lower > upper) {cout << -1 << endl;}
  else{ 
  if(lower == -2147483647  && upper == 2147464783) {cout << 0 << endl;

  
  } else if(upper == 2147464783){
    
    cout << lower << endl;
    } else if(lower = -2147483647){ cout << upper << endl;;
  } else {

    cout << lower << endl;
  }
    }
  nums.clear();
}
  }
