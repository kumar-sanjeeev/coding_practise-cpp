#include <bits/stdc++.h>
using namespace std;

void binary(int n)
{
    for(int i=10; i>=0; i--)
    {
        int x = n>>i;
        if(x&1 !=0)
            cout<<"1";
        else
            cout<<"0";
    }
    cout<<endl;
}


int main()
{
    int n;cin>>n;

    // Code to check even and odd
    for(int i=0; i<=n; i++)
    {
        binary(i);
        if( i & 1)
            cout<<" :ODD"<<endl;
        else
            cout<<" :EVEN"<<endl;
    }

    // Code uppercase to lowecase----> SHORTCUT METHOD
    char A ='A';
    char a = A | ' ';
    cout<<a<<endl;

    //Code lowercase to uppercase----> SHORTCUT METHOD

    char b = 'b';
    char B = b & '_';
    cout<<B<<endl;

    // Proper Explanation from uppercase to lower case;

    char A = 'A';   //Binary--->01000001   
    char a = 'a';   //Binary--->01100001
                            //    543210
    // SO now the case is we need to set the 5th bit if uppercase to lowercase
    // So to set the bit we use the or operator with (1>>5)
    binary(A);
    binary(a);
    cout<<endl;
    char a_1 = 'A' | (1<<5);
    cout<<a_1<<endl;
    
    //Similarly from lowercase to uppercase--> if need to unset the 5th bit
    char z = 'z';
    char Z_1 = z & (~(1<<5));
    cout<<Z_1<<endl;

    // Clear LSB

    int N = 40;
    binary(N);
    int i = 6;
    int b = N & (~((1<<(i+1))-1));
    binary(b);

    // clear MSB
    int g = N & (((1<<(i+1))-1));
    binary(g);
}