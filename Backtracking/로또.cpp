#include <algorithm>
#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

bool isVisited[50];
int arr[50];

void DFS(vector<int>& vecTemp,int index, int cnt)
{
	if (cnt == 6)
	{
		for (int i = 0; i < 6; i++)
		{
			cout << arr[i] << " ";
		}

		cout << '\n';

		return;
	}

	for (int i = index; i < vecTemp.size(); i++)
	{
		if (!isVisited[i])
		{
			isVisited[i] = true;
			arr[cnt] = vecTemp[i];
			DFS(vecTemp, i + 1, cnt + 1);
			isVisited[i] = false;
		}
	}
}

int main()
{
	while (1)
	{
		int k;
		cin >> k;

		if (k == 0)
		{
			break;
		}	

		memset(isVisited, false, sizeof(isVisited));
		memset(arr, 0, sizeof(arr));

		vector<int> vecTemp;

		for (int i = 0; i < k; i++)
		{
			int nTemp;
			cin >> nTemp;
			vecTemp.push_back(nTemp);
		}

		sort(vecTemp.begin(), vecTemp.end());

		DFS(vecTemp, 0, 0);		

		cout << '\n';
	}

	return 0;
}