ector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
            int i=0;
            int j=0;
            int k=0;
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j]==C[k]){
                    if(!ans.size()>0){
                        ans.push_back(A[i]);
                    }
                    else if(ans.back() != A[i]){
                        ans.push_back(A[i]);
                    }
                    i++;
                    j++;
                    k++;
                }
                
                else if(A[i]<B[j]){
                    i++;
                }
                else if(B[j]<C[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
            
            if(ans.size() >0){
                return ans;
            }
            
            else{
                ans.push_back(-1);
                return ans;
            }
        
        }

};