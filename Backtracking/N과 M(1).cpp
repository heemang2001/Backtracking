#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

#define MAX 9

int N, M;
int arr[MAX];
bool isVisited[MAX];

void DFS(int cnt)
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

	for (int i = 1; i <= N; i++)
	{
		if (!isVisited[i])
		{
			isVisited[i] = true;
			arr[cnt] = i;
			DFS(cnt + 1);
			isVisited[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;

	DFS(0);

	return 0;
}