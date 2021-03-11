#include <stdio.h>
int main()
{
    int i, j, k, d;
    int a[10],b[10],c[10];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    // 3 + 3 = 6
    k=0;
    for(i=0;i<3;i++)
    {  
        c[k]=a[i];
        k++;
    }
    for(i=0;i<3;i++)
    {  
        c[k]=b[i];
        k++;
    }
  
        for (i = 0; i < 6; ++i) 
        {
 
            for (j = i + 1; j < 6; ++j)
            {
 
                if (c[i] > c[j]) 
                {
 
                      d =  c[i];
                    c[i] = c[j];
                    c[j] = d;
 
                }
 
            }
 
        }

    for(i=0;i<6;i++)
    {
        printf("%d  ",&c[i]);

    }
    
    





    return 0;
}