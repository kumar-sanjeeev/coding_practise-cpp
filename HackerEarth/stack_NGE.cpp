

#include <bits/stdc++.h>
using namespace std;


vector<int> nextGreater(vector<int> v)
{
    vector<int> temp(v.size());
    stack<int> st;
    for(int i=0; i<v.size(); i++)
    {
        while(!st.empty() && v[i]>v[st.top()])
        {
            temp[st.top()]=i;
            st.pop();
        }
        st.push(i);

        while(!st.empty())
        {
            temp[st.top()]==-1;
            st.pop();
        }
    }
    return temp;


}
int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vector<int> output = nextGreater(v);

    for(int i=0; i<output.size(); i++)
    {
        cout<<v[i]<<" "<<(output[i]==-1 ? -1 : v[output[i]])<<endl;
    }
}










// #include <bits/stdc++.h>
// using namespace std;

// vector<int> NGE(vector<int> v)
// {
//     cout<<"FUNCTION STARTED"<<endl;
//     int size= v.size();
//     vector<int>temp (size,0);
//     stack<int> st;

//     for(int i=0; i<v.size(); i++)
//     {
//         cout<<"Inside for loop"<<i<<endl;
//         while(!st.empty() && v[i]>st.top())
//         {
//             temp[i-1]=v[i];
//             st.pop();
//             i--;
//         }
//         st.push(v[i]);
//     }
//     cout<<"FUNCTION FINISHED"<<endl;
//     return temp;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v(n);

//     for(int i=0; i<n; i++)
//     {
//         cin>>v[i];
//     }

//     vector<int> output =NGE(v);
//     for(int i=0; i<output.size(); i++)
//     {
//         cout<<v[i]<<" "<<(output[i]==0 ? -1 :output[i])<<endl;
//     }

// }

