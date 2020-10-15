void BubbleSort(int a[],int size)
     {
       int pass,j,temp,flag;
       for(pass=1;pass<=size-1;pass++)
        {
          flag=0;
          for(j=0;j<=size-1-pass;j++)
           {
            if(a[j]>a[j+1])
             {
              flag=1;
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
             }
            
           }
        if(flag==0)
             return;
       }
    
    
     }
    
    main()
    {
    int a[]={22,55,11,33,66,55};
    int k;
    clrscr();
    BubbleSort(a,6);
    for(k=0;k<6;k++)
     printf("%d ",a[k]);
    getch();
    }
