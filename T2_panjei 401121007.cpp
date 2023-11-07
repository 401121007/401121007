#include <iostream>

using namespace std;
	void isprime2(int n){
    int i=2;

	while(i<n){
        int s=2;
        int c=0;
		while(s<i){
		if(i%s==0){
			c++;
		}
		s++;

	}
	if(c==0){cout << i << " ";}
    i++;

    }
}

class Math {

public:
    string isPrime (int n){
        int s=0;
        int i=2;
        while (i<n){
            if(n%i==0){
                s++;
            }
            i++;
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

    while(true){
    cout<< "please type your number (if you want to finish press 0):";
    cin >> n;

    if(n==0){break;}

    else{
    cout << "result is: "<< a1.isPrime(n)<<endl;
	isprime2(n);
	cout<<"\n";
    }
    }
    cout << "FINISH!!!";



    return 0;
}

