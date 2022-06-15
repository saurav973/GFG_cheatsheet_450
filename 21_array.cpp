 bool subArrayExists(int a[], int n)
    {
        //Your code here
        int sum=0;
        map<int,int> m;
        for(int i=0;i<n;i++){
            sum+=a[i];
            m[sum]++;
            if(m[sum]>1 || sum==0){
                return 1;
                break;
            }
        }
        return 0;
        
        
        
    }