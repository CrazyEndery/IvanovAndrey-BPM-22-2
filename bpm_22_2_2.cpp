#include <iostream>

int main(){
    double x = 0.0;
    double y = 0.0;
    double k = 0;
    double n = 0;
    double a = 0.0;
    while(1){
        std::cin >> x >> y;
        // if (<написать условие для потока>){
        //     break;
        // }
        k+=1;
        if (y<=2-x && y>=abs(x)){
            n+=1;
        }
    }
    a = n/k;
    std::cout << a;
}