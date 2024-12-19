#include <iostream>
using namespace std;

// WSLubuntu给sort添加注释
void sort(int arr[], int size)
{
    int tmp = 0;
    char flag = false;
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - 1; ++j)
        {
            // Windows修改排序算法，从大到小排序
            if (arr[j] < arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                flag = true;
            }
        }
        if (!flag)
            break;
    }

}

int main()
{
    // widows添加的注释
    int arr[] = {12, 4, 89, 43, 21, 78};
    int size = sizeof(arr)/sizeof(arr[0]);

    sort(arr, size);
    return 0;
}
