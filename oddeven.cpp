#include <iostream>
using namespace std;

int main()
{
    int T,num;
    cin>>T;
    while(T--)
    {
        cin>>num;
        if(num%2==0)
            cout<<"even"<<endl;
        else
            cout<<"odd"<<endl;
    }
    return 0;
}
