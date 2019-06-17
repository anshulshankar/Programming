#include<bits/stdc++.h>
using namespace std;

int get_superstar(int arr[], int n)
{
	int left_max[n];
	int right_min[n];
	int val1;
	int val2;

	left_max[0] = val1 = arr[0];
	for(int i = 1; i < n; ++i){
		if (arr[i] > val1) {
			val1 = arr[i];
		}
		left_max[i] = val1;
	}

	right_min[n - 1] = val2 = arr[n - 1];
	for (int i = n - 1; i >= 0; --i) {
		if(arr[i] < val2) {
			val2 = arr[i];
		}
		right_min[i] = val2;
	}


	/*for(int i = 0; i < n; ++i) {
		cout << right_min[i] << " ";
	}*/
	for (int i = 1; i < n - 1; ++i) {
		if(arr[i] >= left_max[i] && arr[i] <= right_min[i]) {
			return arr[i];
		}
	}
	return -1;
}
int main()
{
	int times;
	scanf("%d", &times);
	while(times--) {
		int n;
		int data;
		scanf("%d", &n);
		int arr[n];
		int res;
		
		for(int i = 0; i < n; ++i) {
			scanf("%d", &data);
			arr[i] = data;
		}
		printf("%d\n", get_superstar(arr, n));
	}
	return 0;
}
