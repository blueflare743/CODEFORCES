#include <iostream>
#include <vector> 
#include <array> 
#include <set> 
#include <map> 
#include <fstream> 
#include <algorithm> 
#include <string> 
typedef long long ll;
using namespace std;
void solve(){
vector<int> arr;
vector<int> arr2;
int n, k;
string a = "";
cin >> n; cin >> k;
string s; 
cin >> s;
//cout << s << endl;
for(int i  = 0; i < n; i++){
 arr.push_back(stoi(s.substr(i,1)));
}

//for(auto it: arr){
//  cout << it << endl;
//}
int solution{};
for(int i = n -1; i >=0; i--){
  if(arr[n - 1] == 1){
    
  } else {
    
 
	if(arr[i] == 1){
		int num = (n - 1) - i;
		if(num <= k) {k -= num; arr[n - 1] = 1; arr[i] = 0;break;}
	}

}
  }
  for(int i = 0; i <n; i++){
  if(arr[0] == 1){
    
  } else { 
  if(i != n - 1)
	if(arr[i] == 1){
		int num = i;
		if(num <= k) {k -= num; arr[0] = 1; arr[i] = 0; break;}
	}

}
    }
  for(int i = 0; i < n ;i++){
    
     a += to_string(arr[i]);
    //cout << arr[i] << endl;
  }
//cout << a << endl;
  for(int i = 0; i < n - 1;i++){
   // cout << a.substr(i, 1) << endl;
  arr2.push_back(stoi(a.substr(i, 2)));
      //cout << "hello" << endl;
}
  for(int i = 0; i < arr2.size();i++){
	solution += arr2[i];
}
cout << solution << endl;
}
int main() {
  int t; cin >> t;
  while(t--){
   solve();
  
}
  return 0;
}
