#include <iostream>
#include <string> 

int main(){
	int t = 0;
	std::cin>>t;
	while(t--){
		int n = 0;
		std::string a;
		std::cin >> n >> a;
		a+='W';
		int r=0;
        int b=0;
        bool can_print = true;
		for(int i=0;i<n+1;i+=1){
			if(a[i]=='B'){
				b+=1;
            } else if(a[i]=='R'){
				r+=1;
            } else{
                if((r==0 && b!=0) ||(b==0 && r!=0)){
					can_print = false;
                }
				r=0;
				b=0;
			}
        }
        if (can_print){
            std::cout << "YES" << "\n";
        } else {
            std::cout << "NO" << "\n";
        }
	}
}