#include <iostream>
#include <cmath>

long double f(double x, int i){
    return(pow(-1,i)*((pow(x,2*i+1))/2*i+1));
}

int main(){
    double dx = 0.05;
    long double eps = 0.0001;
    std::cout << "x" << "\t" << "sum" << "\n";
    for (double x = 0.1;x < 1.04;x+=dx){
        long double sum = 0.0;
        std::cout << x << "\t";
        int i = 0;
        while(abs(f(x,i))>=eps){
            sum+=f(x,i);
            i+=1;
        }
        // for (int i = 0;i>-1;i+=1){
        //     if(abs(f(x,i))<eps){
        //         break;
        //     }
        //     sum+=f(x,i);
        // }
        std::cout << sum << "\n";
    }
}