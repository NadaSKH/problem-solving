//Monk and invensions
#include <iostream>

using namespace std;

int main()
{
    int t,counter,i,j,k,x;
    cin>>t;
    int n,arr[100][100];
    while(t--)
    {
        cin>>n;
        counter=0;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                cin>>arr[i][j];
        }
        for(i=0; i<n; i++)
        {
            for(j=0 ;j<n; j++)
            {
                for (int x = i; x < n; ++x) {
					for (int y = j; y < n; ++y) {
						if (arr[x][y] < arr[i][j]) counter++;
					}
				}
            }
        }
        cout<<counter<<endl;
    }




    return 0;
}






