#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(n%2){
        cout<<"Weird";
    }
    else{
        if(n>1 && n<6){
            cout<<"Not Weird";
        }
        else if(n>5 && n<21){
            cout<<"Weird";
        }
        else {
        cout<<"Not Weird";
        }
    }
    return 0;
}
