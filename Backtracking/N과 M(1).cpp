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
	// ����(����)�� M�̸�
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << " "; // arr�� ����Ȱ� M�� ��ŭ ���
		}

		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!isVisited[i])	// �湮 �������� 
		{
			isVisited[i] = true; // �湮 ǥ��
			arr[cnt] = i; // i�� arr�� ����
			DFS(cnt + 1); // M���� ����� ��
			isVisited[i] = false; // ��Ʈ��ŷ
		}
	}
}

int main()
{
	cin >> N >> M;

	DFS(0);

	return 0;
}