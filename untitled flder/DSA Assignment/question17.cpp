#include<iostream>
using namespace std;

void printKMax(int arr[], int N, int w)
{
	int j, max;

	for (int i = 0; i <= N - w; i++) {
		max = arr[i];

		for (j = 1; j < w; j++) {
			if (arr[i + j] > max)
				max = arr[i + j];
		}
		cout<<max<<endl;
	}
}

int main()
{
	int arr[] = { 1,3,-1,-3,5,3,6,7};
	int N = sizeof(arr) / sizeof(arr[0]);
	int w = 3;
	printKMax(arr, N, w);
	return 0;
}
