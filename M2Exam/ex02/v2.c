#include <stdio.h>

/*void    ft_remove(int *n1,int *n2,int n,int i)
{
    *n1=NULL;
    *n2=NULL;
    if(i<n)
    {
      int    count=0;
      for(int j=0;j<n;j++)
      {
          if(n1[i]==n2[j])
          {
              count++;
              if(count>1)
                n2[j]=0;
              if(n2[j]==0)
                break;
          }
      }
      if(count>0)
          printf("%d\n",n1[i]);
    }
      return ft_remove(*n1,*n2,n,i++);
    
}*/
int    main()
{
    int    n=5;
    scanf("%d",&n);
    int    arr[5];
    int    temp[5];
    /*arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    arr[3]=3;
    arr[4]=4;*/
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int    count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==temp[j])
            {
                count++;
                if(count>1)
                  temp[j]=0;
                if(temp[j]==0)
                  break;
            }
        }
    }
    int i=0;
    while(i<n)
    {
        if(temp[i]==0)
          i++;
        else
        {
          printf("%d\n",temp[i]);
          i++;
        }
    }
    return 0;
}
