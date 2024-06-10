

// first appproach using for loops

// vector<int>singleNumber3(vector<int>&nums) {
    //     vector<int>res(2,0);
    //     for(int i=0;i<32;i++){
        //         int bit=0;
        //         for(int j=0;j<nums.size();j++){
            //             bit+=((nums[j]>>i)&1);
            //         }
            //         if(bit%3){
                //             if(bit%3==1)res[0]|=(1<<i);
                //             else res[1]|=(1<<i);
                //         }
                //     }
                //     return res;
                // }

//}