// Program to check if an year is a LeapYear or not.
#include<iostream>
using namespace std;
// CAUTION:- The sequence of Leap Years should not be changed otherwise, it will make a runtime error
bool LeapYear(int n){
    if(n%400==0)
        return true;
    else if(n%100==0)
        return false;
    else if(n%4==0)
        return true;
    return false;
}
int main(){
    int n;
    cout<<"Enter an year:";
    cin>>n;
    bool a=LeapYear(n);
    if(a==true)
        cout<<n<<" is a Leap Year";
    else
        cout<<n<<" is not a Leap Year";
    return 0;
}