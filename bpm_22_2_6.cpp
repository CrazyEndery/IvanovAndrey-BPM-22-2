#include <iostream>
#include <vector>

int main(){
    int h = 0;
    int w = 0;
    int k = 0;
    std::cin >> h >> w;
    std::vector<int> m(h*w);
    for(int i = 0; i < h*w; i+=1){
        std::cin >> m[i];
    }
    for(int i = 0; i < h*w; i+=1){
        int sum = 0;
        for (int j = 0; j < i/w+1; j+=1){
            for(int t = 0; t < i%w+1; t+=1){
                sum+=m[(j*h)+t];
            }
        }
        if(k==w){
            std::cout << "\n";
            k = 0;
        }
        std::cout << sum << " ";
        k+=1;
    }
}