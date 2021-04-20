#include <bits/stdc++.h>

using namespace std;



int main()
{

    int n,d,input;
    cin>>n>>d;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        cin>>input;
        arr.push_back(input);

    }


    vector<int> temparray;
    for(int i=0;i<d; i++)
    {
        temparray.push_back(arr[i]);
    }
    for(int i=d; i<n; i++)
    {
        arr[i-d] = arr[i];
    }
    for (int i = n-d; i < n; i++) {
        arr[i] = temparray[i-(n-d)];
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }




    return 0;
}

