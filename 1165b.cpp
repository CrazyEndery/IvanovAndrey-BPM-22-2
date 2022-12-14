#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> contest(n);
    int day = 1;
    int k = 0;
    for(int i = 0; i < n; i += 1){
        std::cin >> contest[i];
    }
    std::sort(contest.begin(), contest.end());
    for(int j = 0; j < n; j += 1){
        if(day <= contest[j]){
            day += 1;
            k += 1;
        }
        else{
            continue;
        }
    }
    std::cout << k;
}