#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
void solve() {
int solution{};
int n, k, d, w;
vector<int> times;
cin >> n; cin >> k; cin >> d; cin >> w;
for(int i = 0; i < n; i++){
  int a; cin >> a;
  times.push_back(a);
}
for(int i = 0; i < n; i++){
   int doses = 1;
  solution++;
  //cout << i << endl;
  int num = times[i]  + w + d;
  for(int j = i + 1; j < n; j++){
    //cout << times[j] << num << endl;
   
    bool set = false;
    if(times[j] >  num || doses == k){
      i = j - 1;
      set = true;
     // cout << i << endl;
      break;
     
    }
    if(!set && j == n - 1){
      i = n + 1;
      break;
    }
    doses++;
  }
}
  cout << solution << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}