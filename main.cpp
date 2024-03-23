#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int prime[100000];
int prime_[100001];
int idx = 0;
int tmp = 0;
int newline = 0;

bool isPrime(int n)
{
	if (n < 2)
		return (false);
	for (int i = 2 ; i * i <= n ; ++i)
		if (n % i == 0)
			return (false);
	return (true);
}

void getPrime(int max)
{
	for (int i = 2 ; i <= max ; ++i)
		if (isPrime(i))
			prime[idx++] = i;
}

int main(void)
{
	getPrime(100000);
	for (int i = 0 ; i < 100000 ; ++i)
	{
		if (prime[i] == 0)
			break ;
		cout << prime[i] << " ";
		prime_[i] = prime[i] - prime[i - 1];
	}
	cout << "\n\n";
	for (int i = 1 ; i < 100000 ; ++i)
	{
		cout << prime_[i] << " ";
		//printf("%3d", prime_[i]);
		++newline;
		if (newline == prime[tmp])
		{
			++tmp;
			newline = 0;
			cout << "\n";
		}
		if (prime_[i + 1] == 0)
			break ;
	}
	cout << "\n\n";
	return (0);
}
