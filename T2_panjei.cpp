#include <iostream>

using namespace std;

class Math {

public:
    string isPrime (int n){
        int s=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                s++;
            }
        }
    if(s==0){
        return "true";
    }
    else {
        return "false";
    }

    }

};

int main()
{
    Math a1;
    int n=1;

    while(n>0){
    cout<< "please type your number (if you want to finish press 0):";
    cin >> n;

    if(n==0){break;}

    else{
    cout << "result is: "<< a1.isPrime(n)<<endl;

    }
    }
    cout << "FINISH!!!";



    return 0;
}
