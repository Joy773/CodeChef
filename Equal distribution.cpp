#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int alice, bob;
        cin >> alice >> bob;
        
        if((alice + bob) % 2 == 0)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
