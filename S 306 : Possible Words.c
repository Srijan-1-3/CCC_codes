#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char alphabets[] = "abcdefghijklmnopqrstuvwxyz";

void allPossible(char *number,int index,int n)
{
    static char s[50] = "";
    static int i = 0;
    
    if(index == n)
    {
        printf("%s\n",s);
        return;
    }
    
    int numFormed = number[index] - '0';
    
    if(numFormed > 0)
    {
        s[i++] = numFormed + 64;
        s[i] = '\0';
        allPossible(number,index+1,n);
        i--;
        if(n-index > 1)
        {
            numFormed = (number[index] - '0') * 10 + number[index+1] - '0';
            if(numFormed < 27)
            {
                s[i++] = numFormed + 64;
                s[i] = '\0';
                allPossible(number,index+2,n);
                i--;
            }
        }
    }
}

int main() 
{
    char number[50];
    scanf("%s",number);
    
    allPossible(number,0,strlen(number));
    
    return 0;
}
