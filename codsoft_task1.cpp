#include <iostream>
#include <random>

using namespace std;

int main(){
    cout <<"Welcome to the guess game"<<endl;
    cout<<"think of a number and give me your initial guess"<<endl;
    int n;
    cin>>n;

    int min = n > 0? 1 :n;
    int max = n > 0? 1000 : -1000;
    random_device randomm;
    mt19937 gen(randomm());
    uniform_int_distribution<int> dis(min, max);
    int x = dis(gen);

    while (true){
        cout<<"Guess a number between "<< min << " and "<< max << endl;
        int y;
        cin >> y;

        if (cin.fail()){
            cin.clear();
            cin.ignore(numeric_limits<streamsize> :: max(), '\n');
            cout<<"Invalid input"<<endl<<"please enter a number within the range"<<endl;
            continue;
        }
        if(y == x){
            cout<<"Your guess is correct"<<endl;
            break;
        }else if(y >x){
            cout<<"Guess is too high"<<endl;
        }else{
            cout<<"Guess is too low"<<endl;
        }
    }
    return 0;
}