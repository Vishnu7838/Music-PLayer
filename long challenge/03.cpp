#include <iostream>

using namespace std;

int main(){

    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){
        int a, b, x, y;
        cin >> x >> y >> a >> b;

        int gold_medals = 0;

        if((a != x) && (a != y)){
            gold_medals++;
        }
        if((b != x) && (b != y)){
            gold_medals++;
        }

        cout << gold_medals << endl;
    }

    return 0;
}