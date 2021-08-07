#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        int k;
        cin >> k;

        int a[size];
        for (int i = 0; i < size; i++)
        {
            cin >> a[i];
        }

        int temp;
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (a[j] > a[i])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for (int i = 0; i < size; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;

        int sum = 0;

        for (int i = 0; i < k; i++)
        {

            int t = a[i];

            int j = i + 1;

            while (j < size && t == a[j])
            {

                sum += t;

                j += 1;
            }

            i = j - 1;

            sum += t;
        }

        cout << sum << endl;
    }
}

#include <iostream>

using namespace std;

int main()
{

    int t, n, k, temp = 0;

    //test case

    cin >> t;

    for (int z = 0; z < t; z++)

    {

        //lenght of array no. to be chosen for max sum

        cin >> n >> k;

        //assigning atrray for n input

        int arr[n];

        //taking input

        for (int i = 0; i < n; i++)

        {

            cin >> arr[i];
        }

        //arranging array in descending order

        for (int i = 0; i < n; i++)

        {

            for (int j = i + 1; j < n; j++)

            {

                if (arr[i] < arr[j])

                {

                    temp = arr[i];

                    arr[i] = arr[j];

                    arr[j] = temp;
                }
            }
        }

        //storing value k from sorted array

        int sum = 0;

        for (int i = 0; i < k; i++)
        {

            int t = arr[i];

            int j = i + 1;

            while (j < n && t == arr[j])
            {

                sum += t;

                j += 1;
            }

            i = j - 1;

            sum += t;
        }

        cout << sum << endl;
    }
}