#include <iostream>
#include <stack>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    // Variables 
    vector<int> store_cals;
    stack<int> temp_cals;
    int add_cals = 0;
    string input;
    int highest = 0;

    // Loop / Data gathering device
   
    while (getline(cin, input)){

        cout << "in loop " << endl;

        if (cin.peek() == '\n'){
            cin.ignore();
            for (int i = 0 ; i < temp_cals.size() ; i++){
                add_cals = add_cals + temp_cals.top();
                temp_cals.pop();

            }
            store_cals.push_back(add_cals);

        } else {
            temp_cals.push(stoi(input));
            cout << temp_cals.top() << endl;
            
        }
    }

    for(int i : store_cals){
        if (i > highest){
            highest = i;
        }
    }

    return 0;

}