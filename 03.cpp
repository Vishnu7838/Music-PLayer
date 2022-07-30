#include <iostream>

using namespace std;

int main(){

    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){
        int n, x;
        cin >> n >> x;

        cout << ((2 * n) + 1) - x << endl;
    }

    return 0;
}