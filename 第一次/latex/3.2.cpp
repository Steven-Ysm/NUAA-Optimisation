#include <iostream>
using namespace std;
bool func(int a[4],int b[4],int m,int n)
{
	int num1 = (a[2] - m)*(b[3] - n) - (a[3] - m)*(b[2] - n);
	int num2 = -(a[1] - m)*(b[3] - n) + (a[3] - m)*(b[1] - n);
	int num3 = (a[1] - m)*(b[2] - n) - (a[2] - m)*(b[1] - n);
	if(num1 >= 0 && num2 >= 0 && num3 >= 0)
		return true;
	if(num1 <= 0 && num2 <= 0 && num3 <= 0)
		return true;
		
	return false;
}

int main()
{
	int a[4], b[4];
	
	for(int i=1; i <= 3; i++)
		cin >> a[i] >> b[i];
		
	int m, n, count;
	cin>>count;
	
	for(int i=0; i<count; i++)
	{
		cin>>m>>n;
		
		if(func(a,b,m,n))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	
	return 0;
}
