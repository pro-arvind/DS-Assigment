int min(int a[],int k,int n)
    {
     int i,Min,key;
     Min=a[k];
     key=k;
     for(i=k+1;i<n;i++)
       {
         if(Min>a[i])
         {
          Min=a[i];
          key=i;
        }
       }
    return (key);
    }
    
    
    main()
    {
    int a[]={67,54,77,44,3,8};
    int i,temp,key;
     for(i=0;i<4;i++)
     {
       key=min(a,i,6);
      temp=a[i];
      a[i]=a[key];
      a[key]=temp;
    }
    
    for(i=0;i<6;i++)
      printf("%d ",a[i]);
   }
    
    
    
