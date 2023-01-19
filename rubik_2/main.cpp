#include <iostream>
#include <vector>
#include "top.h"
#include <algorithm>
using namespace std;

// class Rubiks {
//   public:
//     vector<vector<int> > colors;
//     Rubiks top(Rubiks users, bool isPrime);
//     Rubiks bot(Rubiks users, bool isPrime);
//     Rubiks right(Rubiks users, bool isPrime);
//     Rubiks left(Rubiks users, bool isPrime);
//     Rubiks front(Rubiks users, bool isPrime);
//     Rubiks back(Rubiks users, bool isPrime);
// };
//

int main() {
  string s = "Enter the cube info as WRGBOY from "
      "sides moving right, then top, then bottom";
  cout << s << endl;
  int input;
  vector<vector<int> > z;
  for (int i = 0; i < 6; i++) {
    vector<int> a;
    for (int j = 0; j < 4; j++) {
      cin >> input;
      a.push_back(input);
    }
    z.push_back(a);
  }
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 4; j++) {
      cout << z[i][j] << endl;
    }
  }
  return 0;
}
