#include <iostream>

int main(){
    double x = 0.0;
    double y = 0.0;
    double k = 0;
    double n = 0;
    double a = 0.0;
    while(std::cin){
        std::cin >> x >> y;
        k+=1;
        if (y<=2-x && y>=abs(x)){
            n+=1;
        }
    }
    a = n/k;
    std::cout << a;
}