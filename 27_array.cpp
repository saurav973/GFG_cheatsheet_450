string isSubset(int a1[], int a2[], int n1, int n2) {
    sort(a1,a1+n1);
    int ele,count=0;
    string ans="Yes";
    for(int i=0;i<n2;i++){
        ele=a2[i];
        int j=0,k=n1-1,mid;
        //cout<<a2[i]<<"^";
        
        count=0;
        while(j<=k){
        mid=(j+k)/2;
        //cout<<j<<"="<<k<<"="<<a1[mid]<<" ";
        if(ele==a1[mid]){count=1;break;}
        else if(ele<a1[mid]){k=mid-1;}
        else{j=mid+1;}
        }
        
        
        if(count==0){ans="No";break;}
    }
    return ans;
    
}