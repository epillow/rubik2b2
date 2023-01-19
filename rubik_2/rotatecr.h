using namespace std;
#include <vector>
#include <algorithm>

vector<vector<int>> rotatecr(vector<vector<int>> cube, bool isPrime) {
  if (!isPrime) {
    vector<int> d;
    vector<vector<int> > dum;
    d.push_back(1);
    d.push_back(1);
    d.push_back(1);
    d.push_back(1);
    dum.push_back(d);
    dum[0] = cube[1];
    
  } else {

  }
}
