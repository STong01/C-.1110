#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	//�������
	int n;
	cin >> n;
	//��������
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	if (n == 1){
		cout << a[0] << endl;
	}
	else
	{
		int *dp = new int[n];
		dp[0] = a[0];

		int max_val = dp[0];
		for (int i = 1; i < n; i++)
		{
			if (dp[i - 1] >= 0)
			{
				dp[i] = dp[i - 1] + a[i];
			}
			else
			{
				dp[i] =a[i];
			}

			max_val = max(max_val, dp[i]);
		}
		cout << max_val << endl;
	}

	system("pause");
	return 0;
}
