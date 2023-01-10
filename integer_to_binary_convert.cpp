#include <iostream>
#include <cmath>
using namespace std;

int n;
int originaln;

int counter;
int firstOne;

string bin;

int main() {
    cout<<"Enter a positive integer: "<<endl;
    cin>>n;

    originaln = n;

    for(counter = 32; counter >= 0; counter -= 1) {
        if (n - (pow(2,counter)) >= 0 ){
            firstOne = counter;
            break;
        }
    }
    for (counter = firstOne; counter >= 0; counter -= 1) {
        if (n - (pow(2,counter)) >= 0 ) {
            bin += "1";
            n = n - pow(2,counter);
        } else bin += "0";
    }

    if (originaln <= 0){
        cout<<"Number must be a positive integer; translation aborted."<<endl;
    }else cout<<"The binary representation of "<<originaln<<" is "<<bin<<endl;

    return 0;
}