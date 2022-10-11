#include <iostream>
int main() {
	int N = 5;
  int M = 5;
  int a = 0;
  int b = 0;
	int** arr = new int* [N];
	for (int i = 0; i < 5; i += 1){
		arr[i] = new int[M];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			std::cin >> arr[i][j];
			if (arr[i][j] == 1) {
				a = i + 1;
				b = j + 1;
			}
		}
	}
	std::cout << abs(a - 3) + abs(b - 3);
}
