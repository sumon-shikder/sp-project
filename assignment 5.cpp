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
int main()
{
    int i;
    string str;
    cin>>str;
    char s[10]="",ss[10]="";
    for(i=0;i<=2;i++)
    {
        s[i]+=str[i];
        ss[i]+=str[i];
    }
    for(i=3;str[i]!='\0';i++)
    {
        if(str[i]=='|')
        {
            break;
        }
        s[i]+=str[i];
    }
    s[i]='\0';
    int j=3;
    for(i=i+1;str[i]!='\0';i++)
    {
        ss[j]+=str[i];
        j++;
    }
    ss[j]+='\0';
    recursion(s);
    recursion(ss);
}
