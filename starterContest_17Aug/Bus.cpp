#include <bits/stdc++.h>
using namespace std;

// const int N = 1e4;

// int main()
// {
//     int t;
//     cin >> t;
//     int hsh[N] = {0};

//     while (t--)
//     {

//         int n, m, q;
//         cin >> n >> m >> q;

//         int flag = m;
//         int pos = 0;
//         // cout<<"FLAG: "<<flag<<endl;
//         // cout<<"Pos: "<<pos<<endl;
//         while (q--)
//         {
//             char c;
//             int p_no;
//             cin >> c;
//             cin >> p_no;
//             // flag = m;
//             // pos = 0;
//             // pos = 0;

//             if (c == '+')
//             {
//                 if (hsh[p_no] >= 0 and hsh[p_no]<=1)
//                 {
//                     hsh[p_no]++;
//                     m--;
//                     if (m < 0)
//                         flag = flag - 1;
//                 }
//                 else
//                 {
//                     // cout<<"Pos inside else: "<<pos<<endl;
//                 }
                    
//             }
//             else if (c == '-')
//             {
//                 if (hsh[p_no] >= 0 and hsh[p_no]<=1)
//                 {
//                     hsh[p_no]--;
//                     m++;
//                     if (hsh[p_no] < 0)
//                         pos = pos - 1;
//                 }
//                 else
//                 {
//                     m++;
//                     pos = pos - 1;
//                 }
//             }
//         }
//         // cout<<flag<<endl;
//         // cout<<pos<<endl;
//         int x = 0;
//         for(int i=1; i<=1e4; i++)
//         {
//             if(hsh[i]<0)
//             {
//                 x++;
//             }
//         }

//         if (flag < m || x>0)
//         {
//             cout << "Inconsistent" << endl;
//         }
//         else
//             cout << "Consistent" << endl;
//     }
// }



const int N = 1e4;

int main()
{
    int t;
    cin >> t;
    int hsh[N] = {0};

    while (t--)
    {

        int n, m, q;
        cin >> n >> m >> q;
        int flag = 0;
        int filled= 0;
        while (q--)
        {
            char c;
            int p_no;
            cin >> c;
            if (c == '+')
            {
                if (hsh[p_no]!=0)
                    flag = 1;
                else
                {
                    hsh[p_no]++;
                    filled ++;

                    if(filled>m)
                        flag = 1;
                }
            }
            else if (c == '-')
            {
                if (hsh[p_no]<0)
                    flag = 1;
                else
                {
                    hsh[p_no]--;
                }
            }
            
        }
        if (flag==1)
        {
            cout << "Inconsistent" << endl;
        }
        else
            cout << "Consistent" << endl;
    }
}
