//calculator add,subtract,multiply and divide
#include <iostream>
using namespace std;
int main(){
    cout<<"Welcome To The Calculator !\n";
    cout<<"NOTE: The calculator is limited to 2 numbers!\n";
    int x,y;
    int sum;
    cout << "Enter a number=";
    cin>>x;
    cout << "Enter another number=";
    cin>>y;
    cout<<"\nThe sum of the numbers is "<<x+y;
    cout<<"\nThe product of two numbers is "<<x*y;
    cout<<"\nThe divison of two numbers is "<<x/y;
    cout<<"\nThe difference of the two numbers is "<<x-y;
    return 0;
}