#include <iostream>
using namespace std;

int main()
{
    int age,diff;
    cout<<"Enter Age : ";
    cin>> age;
    if(age>=18)
        cout<<"ELIGIBLE";
    else
    {
        cout<<"NOT ELIGIBLE"<<endl;
        diff=18-age;
        cout<<"You will be eligible to vote in "<<diff<<" years";
    }
    return 0;
}
