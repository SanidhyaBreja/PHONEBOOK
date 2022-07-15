#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
unordered_map<string,vector<string>> phonebook;
phonebook["rahul"].push_back("9110");
phonebook["rahul"].push_back("9111");
phonebook["rahul"].push_back("9112");
phonebook["rohan"].push_back("9113");
phonebook["rohan"].push_back("9114");
phonebook["rohan"].push_back("9115");
for(auto p:phonebook)
{
	cout<<"name"<<p.first<<" ";
	for(string s:p.second)
	{
		cout<<s<<",";
	}
	cout<<endl;
}
string name;
cin>>name;
if(phonebook.count(name)==0)
{
	cout<<"absent";
}
else
{
	for(string s:phonebook[name])
	cout<<s<<" ";
}


}

