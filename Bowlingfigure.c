#include <stdio.h>
#include <string.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    
    while (T--)
    {
        char ch[1001];
        scanf("%s",&ch);
        int len= strlen(ch),count=0,run=0,temp;
        int over= len/6;
        int rest= (len%6) ;
        for ( i = 0; i < len; i++)
        {
            if (ch[i]=='W')
            {
                count++;
            }
            else if (ch[i]>='0' && ch[i]<='9')
            {
                temp=ch[i]-'0';
                run+=temp;
            }
            
        }
        if (len>6)
        {
            printf("%d.%d Overs ",over,rest);
        }
        else
        {
            printf("%d.%d Over ",over,rest);
        }
        if (run>1)
        {
            printf("%d Runs ",run);
        }
        else
        {
            printf("%d Run ",run);
        }
        if (count>1)
        {
            printf("%d Wickets.\n",count);
        }
        else{
            printf("%d Wicket.\n",count);
        }
    }
    return 0;
}