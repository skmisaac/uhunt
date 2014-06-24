#include<cstdio>
#include<cmath>

using namespace std;

#define MAX_N 100000
#define MAX_N_ROOT 316

int num[MAX_N];
int ind[MAX_N];
int first[MAX_N];
int last[MAX_N];
int count[MAX_N];

int sTable[MAX_N_ROOT+1][MAX_N];

int n;
int distinct;

inline int max(int x, int y)
{
	return x > y ? x : y;
}

void buildSTable()
{
	int dist=1;
	int l;
	int nRoot = 0;
	int tmpN = n;
	while (tmpN > 1)
	{
		tmpN >>= 1;
		//tmpN /= 2;
		++nRoot;
	}
	for (int i = 1; i <= nRoot; ++i)
	{
		l = distinct - dist*2 + 1;
		for (int j = 0; j < l; ++j)
		{
			sTable[i][j] = max(sTable[i-1][j], sTable[i-1][j+dist]);
		}
		dist <<= 1;
		//dist *= 2;
	}
}
int rmq(int st, int end)
{
	if (st > end)
		return 0;
	else if (st == end)
		return sTable[0][st];
	int l = end - st + 1;
	int dist = 1;
	int	i = 0;
	while (l > 1)
	{
		l >>= 1;
		dist <<= 1;
		//l /= 2;
		//dist *= 2;
		++i;
	}
	return max(sTable[i][st], sTable[i][end-dist+1]);
}
int main()
{
	int q;
	scanf("%d", &n);
	while (n != 0)
	{
		distinct = 0;
		scanf("%d", &q);
		int prev;
		scanf("%d", &num[0]);
		ind[0] = 0;
		first[0] = 0;
		sTable[0][0] = num[0];

		prev = num[0];
		for (int i = 1; i < n; ++i)
		{
			scanf("%d", &num[i]);
			if (num[i] != prev)
			{
				last[distinct] = i-1;
				count[distinct] = last[distinct] - first[distinct] + 1;
				sTable[0][distinct] = count[distinct];
				++distinct;
				first[distinct] = i;
			}
			ind[i] = distinct;
			prev = num[i];
		}
		last[distinct] = n - 1;
		count[distinct] = last[distinct] - first[distinct] + 1;
		sTable[0][distinct] = count[distinct];

		++distinct;

		buildSTable();
		int st, end;
		int stInd, endInd;
		for (int i = 0; i < q; ++i)
		{
			scanf("%d%d", &st, &end);
			--st;
			--end;
			stInd = ind[st];
			endInd = ind[end];
			int ans;
			if (stInd == endInd)
				ans = end - st + 1;
			else
				ans = max(rmq(stInd+1, endInd-1),max(last[stInd]-st+1, end-first[endInd]+1));
			printf("%d\n", ans);
		}
		scanf("%d", &n);
	}
	return 0;
}