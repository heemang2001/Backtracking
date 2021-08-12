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
	// 깊이(길이)가 M이면
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " "; // arr에 저장된것 M개 만큼 출력
		}

		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!isVisited[i])	// 방문 안했으면 
		{
			isVisited[i] = true; // 방문 표시
			arr[cnt] = i; // i값 arr에 저장
			DFS(cnt + 1); // M까지 더깊게 들어감
			isVisited[i] = false; // 백트래킹
		}
	}
}

int main()
{
	cin >> N >> M;

	DFS(0);

	return 0;
}