#include "rotate.h"
#include <vector>
#include <algorithm>
using namespace std;

//top and top inverse
vector<vector<int>> top(vector<vector<int>> cube, bool isPrime) {
  if (!isPrime) {
    cube[0] = rotate(cube[0],false);
    int hold0 = cube[1][0];
    int hold1 = cube[1][1];
    cube[1][0] = cube[2][0];
    cube[1][1] = cube[2][1];
    cube[2][0] = cube[3][0];
    cube[2][1] = cube[3][1];
    cube[3][0] = cube[4][0];
    cube[3][1] = cube[4][1];
    cube[4][0] = hold0;
    cube[4][1] = hold1;
    return cube;
  } else {
    cube[0] = rotate(cube[0],true);
    int hold0 = cube[1][0];
    int hold1 = cube[1][1];
    cube[1][0] = cube[4][0];
    cube[1][1] = cube[4][1];
    cube[4][0] = cube[3][0];
    cube[4][1] = cube[3][1];
    cube[3][0] = cube[2][0];
    cube[3][1] = cube[2][1];
    cube[2][0] = hold0;
    cube[2][1] = hold1;
    return cube;
  }
}
