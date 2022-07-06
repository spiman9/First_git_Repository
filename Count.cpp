using namespace std;
#include<bits/stdc++.h>

// This is a Count sort
int findMax(int A[] , int n)
{
    int ans=0;
    for(int i=1;i<n;++i)
    {
        if(A[i] > A[ans])ans = i;
    }
    return A[ans];
}


void CountSort(int A[] , int n)
{
    int max = findMax(A , n);
    int *arr = new int[max+1];
    for(int i=0;i<max+1 ; ++i)
    {
        arr[i] = 0;
    }

    for(int i=0;i<n;i++)
    {
        arr[A[i]]++;
    }

    int i=0 , j=0;
    while(i<max+1)
    {
        if(arr[i] > 0)
        {
            A[j++] = i;
            arr[i]--;
        }
        else{
            i++;
        }
    }

}

int main() 
{
    int A[] = {6,3,9,10,15,6,8,12,3,6};
    int n=10;
    CountSort(A , n);
    for(int i=0;i<n;i++)
    {
        cout << A[i] << " ";
    }
}