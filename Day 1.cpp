#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int first;
    double second;
    string third;
    cin>>first>>second;
    cin.ignore();
    getline(cin,third);
    cout<<first+i<<endl;
    cout<<fixed<<setprecision(1)<<d + second<<endl;
    cout<<s<<third<<endl;
    return 0;