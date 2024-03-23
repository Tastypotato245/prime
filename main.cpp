#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int prime[100000];
int prime_[100001];
bool map[10001][10001];
bool map2[10001][10001];
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
//	for (int i = 1 ; i < 100000 ; ++i)
//	{
////		cout << prime_[i] << " ";
//		printf("%3d", prime_[i]);
//		++newline;
//		if (newline == prime[tmp])
//		{
//			++tmp;
//			newline = 0;
//			cout << "\n";
//		}
//		if (prime_[i + 1] == 0)
//			break ;
//	}
//	cout << "\n\n";
//	for (int i = 0 ; i < 100000 ; ++i)
//	{
//		if (prime[i] == 0)
//			break ;
//		cout << prime[i] - i << " ";
//	}
//	cout << "\n\n";

//	cout << "\n\n";
//
//	for (int i = 0 ; i < 1000 ; ++i)
//	{
//		int n = prime[i];
//		int j = i - 1;
//		while (n)
//		{
//			if (j <= -1)
//			{
//				n -= 1;
//				map[i][2 + j] = true;
//			}
//			else if (prime[j] <= n)
//			{
//				n -= prime[j];
//				map[i][2 + j] = true;
//			}
//			--j;
//		}
//	}
//	cout << "\n";
//	for (int i = 0 ; i < 400 ; ++i)
//	{
//		for (int j = 0 ; j < 400 ; ++j)
//			cout << (map[i][j] ? "██" : "  ");
//		cout << "\n";
//	}

//	cout << "\n\n";
//	for (int i = 0 ; i < 1000 ; ++i)
//	{
//		int n = prime[i];
//		int j = -2;
//		while (n && j <= i)
//		{
//			if (j <= -1)
//			{
//				n -= 1;
//				map2[i][2 + j] = true;
//			}
//			else if (prime[j] <= n)
//			{
//				n -= prime[j];
//				map2[i][2 + j] = true;
//			}
//			++j;
//		}
//	}
//	cout << "\n";
//	for (int i = 0 ; i < 100 ; ++i)
//	{
//		for (int j = 0 ; j < 100 ; ++j)
//			cout << (map2[i][j] ? "██" : "  ");
//		cout << "\n";
//	}
	return (0);
}
