using namespace std;
#include <vector>
#include <algorithm>

vector<int> rotate(vector<int> side, bool isPrime) {
  if (!isPrime) {
    int hold = side[1];
    side[1] = side[0];
    side[0] = side[2];
    side[2] = side[3];
    side[3] = hold;
    return side;
  } else {
    int hold = side[1];
    side[1] = side[3];
    side[3] = side[2];
    side[2] = side[0];
    side[0] = hold;
    return side;
  }
}
