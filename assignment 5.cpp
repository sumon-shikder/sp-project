#include<iostream>
using namespace std;
int recursion(string s)

{
    int len=s.length();
    if(s[0]==s[3])
    {
        cout<<s<<endl;
        cout<<"Left Recursion"<<endl<<endl;
        return 0;
    }
    else if(s[len-1]==s[0])
    {
        cout<<s<<endl;
        cout<<"Right Recursion"<<endl<<endl;
        return 0;
    }
else{
        for(int i=4;i<len-1;i++)
        {
            if(s[i]==s[0])
            {
                cout<<s<<endl;
                cout<<"General Recursion"<<endl<<endl;
                return 0;
            }
        }
    }

