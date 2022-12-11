#include<iostream>
#include<vector>
using namespace std;

int main()
{
	
	int low, max,first =2;
	vector <int> primes = {2};
	
	bool ok = 0;
	
	while(ok==false)
	{
		cout << "Enter what number to start and the limit: ";
		cin >> low >> max;
		
		if(low>max)
		{
			cout << "Initial number must be lower than the limit.\n";
			
		} else if(low<2)
		{
			low=2;
			ok=true;
		} 
		else ok=true;
	}
	
	
	
	
	while(first<=max)
	{
		bool isPrime = true;
		
		for(int i:primes)
		{
		if(first%i==0)
		{
			isPrime=false;
			break;
		} 
		}
		if(isPrime==true)
		{
			primes.push_back(first);
		}
		
	first++;
	}
	
	for(int x:primes)
	{
		if(x>=low){
		cout << x << endl;
		}
	}
	
	
	
	
}