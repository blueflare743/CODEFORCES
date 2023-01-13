#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <array>
#include <string> 

using namespace std;

  
void solve(int k, int n ){
int diff = 0;
int num = 1;
bool set = false;
for(int i = 0 ;i < k; i++){
  if((n - (num) < k - (i + 1)||(num)> n) || (set)){//nexy element
    if(set == false) num -= diff;
    set = true;
    
    num++;
    cout << num << " ";
  } else {
    cout << num << " ";// 1 , 2 , 4, 7
    diff ++ ;
    num = num + diff;
  }
}
cout << endl;
  
}
int main(){
int t; cin >> t;
int k,n;
for(int i = 0 ;i < t ; i++){
cin >> k; cin >> n;
  
if ( k == n){
  for(int i = 1; i <= k;i++) cout << i << " ";
  cout << endl;
} else { 
solve(k, n);
  }
}
}
