#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n = 0;
    long long k = 0;
    long long p = 0;
    std::cin >> n >> k;
    std::vector<int> arr(n);
    for (int i = 0;i < n;i += 1){
        std::cin >> arr[i];
    }
    if (k>=n){
        std::sort(arr.begin(),arr.end());
        std::cout << arr[n-1];
        return 0;
    }
    while (p<k){
        if (arr[0] > arr[1]){
            arr.push_back(arr[1]);
            arr.erase(arr.begin()+1);
            p+=1;
        } else {
            arr.push_back(arr[0]);
            arr.erase(arr.begin());
            p = 1;
        }
    }
    std::cout << arr[0];
}