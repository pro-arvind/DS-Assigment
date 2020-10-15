void insertion(int a[],int size)
     {
      int temp,j,k;
       for(j=1; j<size; j++)
         {
           temp=a[j];
            for(k=j-1; k>=0; && temp<a[k]; k--)
             {
               a[k+1]=a[k];
            }
            a[k+1]=temp;
            
          }
        
        
        main()
        {
        int a[]={5,6,8,4,7,3};
        int j;
        selection(a,6);
        }
            
   
