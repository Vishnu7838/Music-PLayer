#include <cmath>
#include <iostream>

using namespace std;

long long int ceil_long_long(long long int number){
    return (number / 2) + (!((number % 2) == 0));
}

int main(){

    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){
        long long int n; cin >> n;
        if(n & 1){
            cout << ceil_long_long(n) * -1 << endl;
        }
        else{
            cout << ceil_long_long(n) << endl;
        }
    }

    return 0;
}