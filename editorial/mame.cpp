#include <iostream>
using namespace std;

int main() {
  int m, d, a;
  cin >> m >> d >> a;
  int fully_age;
  if (m < 2) {
    fully_age = a;
  } else if (m == 2 && d <= 3) {
    fully_age = a;
  } else {
    fully_age = a + 1;
  }
  cout << fully_age << endl;
  return 0;
}
