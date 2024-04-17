// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2
#include<iostream>
#include<string>
#include<sstream>
#include <vector>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string : ";
    cin>>str;
    int max1=(int)str[0];
    for(int i=0;i<str.size();i++){
        int temp=(int)str[i];
        if(temp>max1) max1=(int)str[i];
    }
    int max2=(int)max1;
    max1=(int)str[0];
    for(int i=0;i<str.size();i++){
        int temp=(int)str[i];
        if(temp>max1 && temp<max2) max2=(int)str[i];
    }
    cout<<"Second largest : "<<(char)max2;
    return 0;
    
}