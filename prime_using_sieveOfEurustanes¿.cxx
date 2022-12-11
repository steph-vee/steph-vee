#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
	//sieve
	int max, start;
	cin >> start >> max;
	vector<int> primes = {0};
	
	for(int i = 2;i<=max;i++)
	{
		for(int x = i*i;x<=max;x+=i)
		{
			primes[x]=1;
		}
		
	}
	
	
	for(int i = start;i<=max;i++)
	{
		if(primes[i]!=1)
		{
			cout << i << endl;	
		}
	}
	
	
}