#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <utility>

int main() 
{
    int num = 0;
    std::cin >> num;

    std::pair<int, int> arr[num];

    for (int i = 0; i < num; i++)
    {   
        std::cin >> arr[i].first >> arr[i].second;
    }

    std::sort(arr, arr + num, [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first < b.first;
    });

    for (int i = 0; i < num; i++)
    {
        printf("%d %d\n", arr[i].first, arr[i].second);
    }

    return 0;
}