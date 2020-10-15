void insertion(int a[],int size)
     {
       int i,j,key;
       for(i=1;i<size;i++)
        {
        key=a[i];
        for(j=i-1;j>=0&&key<a[j];j--)
        {
         a[j+1]=a[j];
        }
        a[j+1]=key;
        
        }
      }
    
    main()
    {
     int a[]={6,7,8,4,77,3,1,88,55,9};
      int k;
    clrscr();
    insertion(a,10);
    for(k=0;k<10;k++)
      printf("%d ",a[k]);
    getch();
    }
    
    
    
    
    
    
    
    
