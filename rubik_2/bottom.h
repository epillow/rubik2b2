#include "rotate.h"
#include <vector>
#include <algorithm>
using namespace std;

//bottom and bottom inverse
vector<vector<int>> top(vector<vector<int>> cube, bool isPrime) {
  if (!isPrime) {
    cube[5] = rotate(cube[5],true);
    int hold2 = cube[1][2];
    int hold3 = cube[1][3];
    cube[1][2] = cube[2][2];
    cube[1][3] = cube[2][3];
    cube[2][2] = cube[3][2];
    cube[2][3] = cube[3][3];
    cube[3][2] = cube[4][2];
    cube[3][3] = cube[4][3];
    cube[4][2] = hold2;
    cube[4][3] = hold3;
    return cube;
  } else {
    cube[5] = rotate(cube[5],false);
    int hold2 = cube[1][2];
    int hold3 = cube[1][3];
    cube[1][2] = cube[4][2];
    cube[1][3] = cube[4][3];
    cube[4][2] = cube[3][2];
    cube[4][3] = cube[3][3];
    cube[3][2] = cube[2][2];
    cube[3][3] = cube[2][3];
    cube[2][2] = hold2;
    cube[2][3] = hold3;
    return cube;
  }
}
