// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with
#include<iostream>
#include<sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string s="decode dsa with pw";
    // cout<<"Enter string : ";
    // getline(cin,s);
    string temp; 
    stringstream ss(s);
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<v[v.size()-1];
    return 0;
}