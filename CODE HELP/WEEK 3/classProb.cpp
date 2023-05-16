#include <iostream>
#include <vector>
using namespace std;
int main() {
//create vector
vector<bool> arr;
int ans = (sizeof(arr)/sizeof(int));
cout << ans << endl;

cout << arr.size() << endl;
cout << arr.capacity() << endl;
return 0;
}