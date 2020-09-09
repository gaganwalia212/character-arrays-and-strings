#include<iostream>
#include<string>
#include<vector>
#include<algorithm>//for sort
using namespace std;
//printing out string in a particular order

bool compare(string s1,string  s2)
{
	if(s1.length()==s2.length())
		return s1<s2;
	else return s1.length()>s2.length();
}
int main()
{
int n;
cin>>n;
cin.get();//to absorb the newline character in buffer
string s;
vector<string>vec;
for(int i=0;i<n;i++)
{
	getline(cin,s);
	vec.push_back(s);
}
//sending the iterators to the beginning and ending of vector
//remember that sort algo does not include the last pointer/iterator
//here sort will use its own method to compare the strings lexocographically
sort(vec.begin(),vec.end());

for(string str:vec)  //for(auto str:vec)
	cout<<str<<endl;

//you can also define your own comparison function and pass it to sort 
sort(vec.begin(),vec.end(),compare);
cout<<endl<<endl;

//each class has its own iterators
//string::iterator....vector<type>::iterator etc
//can use auto 
for(vector<string>::iterator it=vec.begin(); it!=vec.end();it++)
cout<<*it<<endl;


}
