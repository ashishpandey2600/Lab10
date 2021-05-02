int m,n;
  cout<<"Enter th values of m and n"<<endl;
  cin>>m>>n;
   srand(time(NULL));
  
   int num=rand()%(n-m+1)+m;
 cout<<num;
