#include <iostream> 
#include <vector> 
#include <array> 
#include <map> 
#include <set>
#include <fstream> 
typedef long long ll;

using namespace std;

int main(){
ofstream fout("out");
ifstream fin("t");
// first label the numbers from increasing order with consecutive indexes. th
// combine operations = n + s - 1. this is true because there are n towers then splitting creates a new tower and combine operations is (totalTowers - 1).
int n; cin >> n;
int a; 
int b;
int s{};
vector<int> stack;
vector<vector<int>> stacks;
set<int> elements;// ordered elements to add to the map
map<int, int> positions; // block number to index
for(int i = 0; i < n; i++){
	cin >> a;
	for(int j = 0; j < a;j++){
            cin >> b;
		stack.push_back(b);
		elements.insert(b);
}
stacks.push_back(stack);
stack.clear();
}
int counter = 0;
for(auto it = elements.begin(); it != elements.end(); it++){
	positions[*it] = counter;
	counter++;
}
for(int i = 0 ;i < n; i++){
	for(int j = 1; j < stacks[i].size(); j++){
		if(positions[stacks[i][j - 1]] + 1 != positions[stacks[i][j]]){
		s++;
}
}
}
cout << s << " ";
cout << s + n - 1 << endl;






return 0;
}