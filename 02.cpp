#include <iostream>

using namespace std;

int main(){

    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){
        int n;
        cin >> n;

        int * supply = new int [n];
        for(int j = 0; j < n; j++){
            cin >> supply[j];
        }

        int answer = 0;
        int * demand = new int [n];
        for(int j = 0; j < n; j++){
            cin >> demand[j];
            if(demand[j] == supply[j]){
                answer++;
            }
        }

        cout << answer << endl;
    }

    return 0;
}