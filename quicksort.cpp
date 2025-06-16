#include <iostream>
using namespace std;
int partition(int arr[], int start, int end)
{
    int smallCount = 0;
    int pivot = arr[start];
    for (int i = start+1 ; i <= end; i++)
    {
        //counting smaller element:
        if (arr[i] <= pivot) //check why did we add equal to.
            smallCount++;
    }
    //placing pivot at the right position:
    int pivotIndex = start + smallCount;
    swap(arr[pivotIndex],arr[start]);
    
    //left-right wala part:
    int i= start;
    int j= end;
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot) //duplicates counting.
        {
            j--;
        }
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
    //Base Case:
    if(start>=end)
    return;
    //partition karo:
    int p= partition(arr,start,end);
    //left side sorting:
    quickSort(arr,start,p-1);
    //right side sorting:
    quickSort(arr,p+1,end);
}
int main()
{
    int arr[6]= {5,18,32,60,2,15};
    quickSort(arr,0,5);
    cout<<"Sorted Array: ";
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" , ";
    }
    return 0;
}
