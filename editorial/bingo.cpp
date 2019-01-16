//###############################################
//#########../tasks/bingo.txtの##################
//#########サンプルコード見たいなものです#############
//#########正しいかどうかは保証しません###############
//#########最適解であることも保証しません#############
//###############################################

#include <iostream>
using namespace std;

int main() {
  int N, a[110][110] = {}, M, b[50100] = {};
  cin >> N;
  int coordinate[50000];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
      coordinate[a[i][j]] = (i + 1) * 1000 + j + 1;
    }
  }
  cin >> M;
  int h_hole[110] = {}, w_hole[110] = {}, slanting[2] = {};
  for (int i = 1; i <= M; i++) {
    cin >> b[i];
    h_hole[coordinate[i] / 1000]++;
    w_hole[coordinate[i] % 1000]++;
    if (coordinate[i] / 1000 == coordinate[i] % 1000) {
      slanting[0]++;
    }
    if (coordinate[i] / 1000 + coordinate[i] % 1000 == N + 1) {
      slanting[1]++;
    }
  }
  bool result = false;
  for (int i = 0; i < N; i++) {
    if (h_hole[i] == N || w_hole[i] == N) {
      result = true;
      cout << i << endl;
      break;
    }
  }
  if (slanting[0] == N || slanting[1] == N) {
    result = true;
  }
  if (result) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }


  return 0;
}
