 for(int i=l;i<=r;i++)
   {
       int dig=0;
       set<int>s;
       int I=i;
       while(I)
       {
           dig++;
           s.insert(I%10);
           I/=10;
       }
       if(s.sz==dig){
        cout<<i<<endl;
        return 0;
       }
   }
