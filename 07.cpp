#include <map>
#include <iostream>

using namespace std;

int find_msb_index(int number){

    int msb_index = 0;
    for(int i = 0; i <= 31; i++){
        int mask = 1 << i;
        if(mask & number){
            msb_index = i;
        }
    }

    return msb_index;
}

int main(){
    
    int number_of_test_cases;
    cin >> number_of_test_cases;

    for(int i = 0; i < number_of_test_cases; i++){

        int number; cin >> number;
        map <int, int> msb;

        for (int i = 0; i < number; i++){
            int num;
            cin >> num;
            int msb_index = find_msb_index(number);
            msb[msb_index]++;
        }

        long long int answer = 0;
        for (auto x : msb)
        {
            long long int msb_index = x.second;
            answer = answer + (((msb_index - 1) * msb_index) / 2);
        }

        cout << answer << endl;
    }
}