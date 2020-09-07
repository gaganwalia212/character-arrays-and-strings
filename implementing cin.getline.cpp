#include<iostream>
#include<ios>
#include<limits>
using namespace std;
void read(char p[],int max,char delimiter='\n')
{
	int i=0;
	char ch=cin.get();
	while(ch!=delimiter &&i<max-1)
	{
		p[i]=ch;
		i++;
		ch=cin.get();
	}
	p[i]='\0';
}
int main()
{


char p[1000];
 read(p,1000);
//cin.getline(p,1000);
cout<<p<<endl;
}
