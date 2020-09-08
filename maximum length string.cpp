#include<iostream>
#include<cstring>
using namespace std;
//printing the largest string from n inputs
//for efficieny we will not store all the strings
//we will only store the current largest string and the current input string

int main()
{


	char a[1000];
	char max_string[1000];
	int n;
	int max_len = 0;
	int len;
	cin >> n;
	//________IMPORTANT____here remember why are we using cin.get()
	cin.get();
	for (int i = 0; i < n; i++)
	{
		cin.getline(a, 1000);
		/*cout << a << endl;*/
		 len=strlen(a);
		 if(len>max_len)
		 {
		 	max_len=len;
		 	strcpy_s(max_string,a);
		 }

	}
	 cout<<max_string<<" "<<max_len<<endl;
}
