#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

vector<string> v;
void subsequence(string a,int i,char output[],int j)
{
	if(a[i]=='\0')
	{
		output[j]='\0';
		v.push_back(output);
		return;
	}
	output[j]=a[i];
	subsequence(a,i+1,output,j+1);
	subsequence(a,i+1,output,j);
}

int main() {
int n;
cin>>n;
for(int i=0; i<n; i++)
{
	string a;
	cin>>a;
	char output[1000];
	subsequence(a,0,output,0);
	sort(v.begin(),v.end());
	int s=v.size();
	for(int i=0; i<s; i++)
	{
		cout<<v[i]<<endl;
	}
}
	return 0;
}
