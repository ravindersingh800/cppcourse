int start,end,sum=0;
cin>>start>>end;
for(int i=start;i<=end;i++){
    if(i%2!=0) sum+=i;
}
cout<<sum;
