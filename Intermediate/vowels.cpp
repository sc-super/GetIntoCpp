#include <iostream>
#include <string>
using namespace std;
int vowel(char w)
{
	switch(w)
	{
		case 'a' :
			{return 0;break;}
		case 'A' :
			{return 0;break;}
		case 'e':
			{return 1;break;}
		case 'E':
			{return 1;break;}
		case 'i' :
			{return 2;break;}
		case 'I':
			{return 2;break;}
		case 'o':
			{return 3;break;}
		case 'O':
			{return 3;break;}
		case 'u' :
			{return 4;break;}
		case'U':
			{return 4;break;}
		default:
			{return 5;break;}
	}
}int main()
{
	string str;
	int count[5]={0},x;
	cout<<"Enter a string: ";
	getline(cin,str);
	int len=str.length();
	for(int i = 0; i<len; i++)
	{	x=vowel(str[i]);
		if(x<5)
			count[x]+=1;
	}
	cout<<"\n a:"<< count[0];
	cout<<"\n e:"<<count[1];
	cout<<"\n i:"<<count[2];
	cout<<"\n o:"<<count[3];
	cout<<"\n u:"<<count[4];

	return 0;
}
