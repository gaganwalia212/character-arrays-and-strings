//challenge at- https://hack.codingblocks.com/app/practice/1/1042/problem

#include<iostream>
#include<cmath>//pow
#include<algorithm>//for sort
#include<cstring>//for strtok
#include<string>//getline
using namespace std;

string extractToken(string s,int key)
{
    //.c_str returns the constant pointer to the underlying array of characters in a string object
    //type cast it form const char* to char *
    char * ptr=strtok((char*)s.c_str()," ");
    while(key>1)
    {
        ptr=strtok(NULL," ");
        key--;
    }
    return (string)ptr;
}

bool lexicoCompare(pair<string,string>s1,pair<string,string>s2)
{
    string k1{s1.second},k2{s2.second};
    return k1<k2;
}

long convertToNumber(string s)
{
    int i=s.length()-1;
    long sum=0;
    int p=0;
    while(i>=0)
    {
        sum=sum+(s[i]-48)*pow(10,p);
        p++;
        i--;
    }
    return sum;
}
bool numericCompare(pair<string,string>s1,pair<string,string>s2)
{
    string k1{s1.second},k2{s2.second};
    return convertToNumber(k1)<convertToNumber(k2);
}
 int main()
 {

	string a[100];
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
        getline(cin,a[i]);
    int key;
    cin>>key;
    pair<string,string> p[100];
    for(int i=0;i<n;i++)
    {
        p[i].first=a[i];
        p[i].second=extractToken(a[i],key);
    }
    string order,reversal;
    cin>>reversal>>order;
    if(order=="numeric")
        sort(p,p+n,numericCompare);
    else sort(p,p+n,lexicoCompare);

    if(reversal=="true")
    {
        for(int i=0;i<n/2;i++)
            swap(p[i],p[n-i-1]);
    }

    for(int i=0;i<n;i++)
        cout<<p[i].first<<endl;



	return 0;
}
