#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define MAX 9

int N, M;
int arr[MAX];
bool isVisited[MAX];

void DFS(int num, int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " ";			
		}

		cout << '\n';
		return;
	}

	for (int i = num; i <= N; i++)
	{
		if (!isVisited[i])
		{
			isVisited[i] = true;
			arr[cnt] = i;
			DFS(i + 1, cnt + 1);
			isVisited[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;

	DFS(1,0);

	return 0;
}