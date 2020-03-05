#include<iostream>
using namespace std;

int main()
{
	string text,pattern;
	int i,j,flag=0;
	cout<<"Enter text string"<<endl;
	cin>>text;
	cout<<"Enter pattern"<<endl;
	cin>>pattern;
	int n = text.length()-pattern.length();
	for(i=0;i<=n;i++)
	{
		j=0;
		while(j < pattern.length() && text[i+j] == pattern[j])
			j++;
		if(j == pattern.length())
			{
				cout<<"Pattern is found at position  "<<i<<endl;
				flag = 1;
			}
	}
	if(flag==0)
		cout<<"Pattern not found"<<endl;
	return 0;
			
}		
			
/*
Enter text string
COMPUTER
Enter pattern
PUT
Pattern is found at position  3
*/
