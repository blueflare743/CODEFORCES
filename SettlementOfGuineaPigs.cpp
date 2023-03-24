#include <iostream>
#include <vector> 
#include <array> 
#include <map> 
#include <set> 
#include <algorithm>
#include <math.h> 


using namespace std;
void solve(){
  int n; cin >> n;
  vector<int> nums;
  for(int i = 0; i < n; i++){
    int a; cin >> a;
    nums.push_back(a);
  }
  array<int, 100001> afterDoc;
  int counter = 2;
  int step = 0;
  afterDoc[0] = 0;
  for(int i = 1; i  < afterDoc.size(); i++){
    if(i ==1) {afterDoc[i] = 1;}
    else { 
    if(step){
     afterDoc[i] =  counter;
    counter++;
    step = 0;
    } else {
       afterDoc[i] = counter;
      step = 1;
    }
    
  }
    }
  int solution{};
  int var{};
  int aveyCounter{};
  int pigCounter{};
  for(int i = 0; i < n; i++){
    
    if(nums[i] == 1) {
      if(var != 0 && solution - var > 0) {
        var++; // 4 pigs, 3 averies, 
        pigCounter++;
       
      } else { 
      
      solution++;
      var++;
       pigCounter++; 
        }
      }
    else { 
      
      var = afterDoc[pigCounter]; // var = 3 takes up all averies
    
      }
  }
  cout << solution << "\n";
}
int main() {
  int t; cin >> t;
  while(t--){
    solve();
  }
}