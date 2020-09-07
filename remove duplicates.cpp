#include<iostream>
#include<ios>

using namespace std;

//removing consecutive duplicates.
//ignore th dupplicates and copy the unique elements in the actual string
//time complexity-O(n) space complexity-O(1)
void remove_duplicates(char p[])
{
	int j=1;
	int i=0;
	for(j=1;p[j]!='\0';j++)
	{
		if(p[i]!=p[j])
		{
			i++;
			p[i]=p[j];
		}
	}
	p[i+1]='\0';
}
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
char ch[20];
cin>>ch;
remove_duplicates(ch);
cout<<ch<<endl;
}
