#include <iostream>
#include <string.h>

using namespace std;

bool isPalindrome(int x)
{
    int newnum=0;
    while(x!=0)
    {
        int d = x%10;
        x/=10;
        newnum = newnum*10+d;
    }
    if(x==newnum)
    {
        return true;
    }
    else return false;
}

bool hasDuplicate(string str)
{
    for (int i=0; i<str.length()-1; i++)
    {
        for(int j=i+1; j<str.length(); j++)
        {
            if(str[i]==str[j])
            {
                return false;
            }
        }
    }
    return true;

}

int main()
{

    char s[100];
    cin>>s;
    if(hasDuplicate(s))
    {
        cout<<false<<endl;
    }
    else cout<<true<<endl;


   return 0;
}
