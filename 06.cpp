#include <cmath>
#include <iostream>

using namespace std;

int main(){

    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){
        int n; cin >> n;

        int answer = 0;
        while(n > 2){
            int last_power = log2(n);
            int value = 1 << last_power;
            answer = answer + (n - value);
            n = value - 1;
        }

        cout << answer << endl;
    }

    return 0;
}