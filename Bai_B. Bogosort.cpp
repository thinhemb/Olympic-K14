

#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int left = low;
    int right = high - 1;
    while (true) {
        while (left <= right && arr[left] < pivot) left++;
        while (right >= left && arr[right] > pivot) right--;
        if (left >= right) break;
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    swap(arr[left], arr[high]);
    return left;
}

/* Hàm thực hiện giải thuật quick sort */
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi là chỉ số nơi phần tử này đã đứng đúng vị trí
         và là phần tử chia mảng làm 2 mảng con trái & phải */
        int pi = partition(arr, low, high);

        // Gọi đệ quy sắp xếp 2 mảng con trái và phải
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Hàm xuất mảng */
void printArray(int arr[], int size)
{
    int i;
    for (i = size-1; i >-1; i--)
        printf("%d ", arr[i]);
    cout << "\n";
}
int main()
{
    int t;cin >> t;
	while (t--)
	{
		int n;	cin >> n;
		int a[100];
		
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			
		}
        quickSort(a, 0, n - 1);
        printArray(a, n);
        
	}
}

