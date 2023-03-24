
    
HOMETOPCATALOGCONTESTSGYMPROBLEMSETGROUPSRATINGEDUAPICALENDARHELP


PROBLEMSSUBMIT CODEMY SUBMISSIONSSTATUSHACKSROOMSTANDINGSCUSTOM INVOCATION
    
General
  
#	Author	Problem	Lang	Verdict	Time	Memory	Sent	Judged	 	 
197088898	Contestant:
bobisagod743	1804A - 19	GNU C++17	Accepted	62 ms	8 KB	2023-03-12 18:03:51	2023-03-12 19:52:23	Add to favourites	Compare
  
→ SourceCopy
#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
void solve() {
  int a, b;
  cin >> a;
  cin >> b;
  int num = abs(a) + abs(b);
  a = abs(a);
  b = abs(b);
  // cout << num << endl;
  int minimun = min(a, b);
  a -= minimun;
  b -= minimun;
  if (max(a, b) > 1)
    cout << num + max(a, b) - 1 << "\n";
  else
    cout << num << "\n";
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}