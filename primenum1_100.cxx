#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int x = 2;
	vector <int> primes = {2};
	
	while(x<=100)
	{
		bool isPrime = true;
		
		for(int i:primes)
		{
		if(x%i==0)
		{
			isPrime=false;
			break;
		} 
		}
		if(isPrime==true)
		{
			primes.push_back(x);
		}
		
	x++;
	}
	
	for(int x:primes)
	{
		cout << x << endl;
	}
	
	
	
	
}