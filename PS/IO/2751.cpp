#include <stdio.h>
#include <iostream>
#include <algorithm>

int main()
{
    int num = 0;
    
    std::cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        int n = 0;
        std::cin >> n;
        arr[i] = n;
    }

    std::sort(arr, arr + num);

    for (int i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}