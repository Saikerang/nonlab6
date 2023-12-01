#include<iostream>
using namespace std;

int main(){
    int num;
    int a = 0;
    int b = 0;
    while (true)
    {
        cout << "Enter an integer: ";
        cin >>num;
        if(num == 0){
            break;
        }else if(num%2 == 0){
            a++;
        }else if(num%2 != 0){
            b++;
        }
        
    }
    cout << "#Even numbers = "<<a<<"\n";
    cout << "#Odd numbers = "<<b<<"\n";
    return 0;
}
