#include <bits/stdc++.h>

long long binpow(long long a, long long b)
{
	long long res = 1;
	while (b > 0)
	{
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

void towerOfHanoi(int n, int from_rod, int to_rod, int aux_rod)
{
	if (n == 1)
	{
		printf("%d %d\n", from_rod, to_rod);
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	printf("%d %d\n", from_rod, to_rod);
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld\n", (binpow(2, n) - 1));
	towerOfHanoi(n, 1, 3, 2);
	return 0;
}
