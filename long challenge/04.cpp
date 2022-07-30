#include <cmath>
#include <iostream>

using namespace std;

int main(){

    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){
        long long int s;
        cin >> s;

        cout << (abs(s) + 1) * -1 << endl;
    }

    return 0;
}