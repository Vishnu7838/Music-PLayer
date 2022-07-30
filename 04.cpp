#include <iostream>

using namespace std;

int main(){

    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){
        
        int n; cin >> n;
        int zero_count = 0, one_count = 0;
        char input;

        for(int i = 0; i < n; i++){
            cin >> input;
            if(input == '0'){
                zero_count++;
            }
            else{
                one_count++;
            }
        }

        if(zero_count > one_count){
            cout << (one_count * 2) + 1 << endl;
        }
        else if(one_count > zero_count){
            cout << (zero_count * 2) + 1 << endl;
        }
        else{
            cout << zero_count * 2 << endl;
        }
    }

    return 0;
}