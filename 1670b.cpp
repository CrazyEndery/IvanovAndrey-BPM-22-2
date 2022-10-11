#include <iostream>
#include <string>
#include <vector>
int main() {
  int t = 0;
  std::cin >> t;
  for (int it = 0; it < t; it += 1) {
    int n = 0;
    std::string str;
    int k = 0;
    std::cin >> n >> str >> k;
    std::vector<char> letters(k);
    for (int ik = 0; ik < k; ik += 1) {
      std::cin >> letters[ik];
    }
    int flag = 1;
    int count = 0;
    while (flag != 0) {
      flag = 0;
      for (int in = 1; in < str.length(); in += 1) {
        for (int ik = 0; ik < k; ik += 1) {
          if (str[in] == letters[ik]) {
            str.erase(in - 1, 1);
            flag = 1;
            in -= 1;
          }
        }
      }
      if (flag != 0) {
        count += 1;
      }
    }
    std::cout << count << std::endl;
  }
}
