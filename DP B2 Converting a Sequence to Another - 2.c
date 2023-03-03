#include<stdio.h>
long maze[1005][1005];

long min(long x,long y)
{
    return x<=y ? x : y;
}

 
int main() 
{
    
    int n, i; 
    scanf("%d",&n); 
    
    int a[n+1];
    for(i=1;i<=n;i++) 
        scanf("%d",&a[i]);
    
    int m, j;
    scanf("%d",&m); 
    int b[m+1];
    for(i=1;i<=m;i++) 
        scanf("%d",&b[i]);
    
    long x,y,z; 
    scanf("%ld %ld %ld",&x,&y,&z);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            if(i==0)  
                maze[i][j]=j*x;
            else if(j==0)  
                maze[i][j]=i*y;
            else if(a[i]==b[j])  
                maze[i][j]=maze[i-1][j-1];
            else
                maze[i][j]=min(min(x+maze[i][j-1],y+maze[i-1][j]),z+maze[i-1][j-1]);
        }
    }
    printf("%ld",maze[n][m]);
    
    return 0; 
}
