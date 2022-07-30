#include <cmath>
#include <iostream>

using namespace std;

int main(){

    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){
        int x, y , d;
        cin >> x >> y >> d;

        if(abs(x - y) <= d){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}