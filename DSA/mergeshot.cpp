#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &vec, int start, int mid, int end)
{
    vector<int> temp;
    int left = start;
    int right = mid + 1;
    while (left <= mid && right <= end)
    {
        if (vec[left] <= vec[right])
        {
            temp.push_back(vec[left++]);
        }
        else
        {
            temp.push_back(vec[right++]);
        }
    }
    while (left <= mid)
    {
        temp.push_back(vec[left++]);
    }
    while (right <= end)
    {
        temp.push_back(vec[right++]);
    }
    for (int i = start; i <= end; i++)
    {
        vec[i] = temp[i - start];
    }
}
void mergesort(vector<int> &vec, int start, int end)
{
    if (start >= end)
        return;
    int mid = (start + end) / 2;
    mergesort(vec, start, mid);
    mergesort(vec, mid + 1, end);
    merge(vec, start, mid, end);
}
int main()
{
    vector<int> vec = {3, 2, 8, 5, 4, 1, 10};
    int n = 7;
    cout << "before sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    mergesort(vec, 0, n - 1);
    cout << "after sorthing :";
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
}