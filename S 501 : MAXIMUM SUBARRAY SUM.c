#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>

int main() 
{
    int n;
    scanf("%d",&n);
    
    int arr[n], i;
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    int max = INT_MIN, sum = 0;
    for(i=0;i<n;i++)
    {
        sum += arr[i];
        if(max < sum)
            max = sum;
        if(sum < 0)
            sum = 0;
    }
    printf("%d",max);
    return 0;
}
