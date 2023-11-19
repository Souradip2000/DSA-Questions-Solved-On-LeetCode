class Solution {
public:

long long minimumSteps(string arr) {
   int lArr=0; 
   long long swaps=0;
    for(int i=0;i<arr.length();i++){
        // cout<<"i: "<<i<<endl;
        // cout<<"lArr is: "<<lArr<<endl;
        
        //cout<<"Value at arr "<<i<<" is: "<<arr[i]<<endl;
        
        if(arr[i]=='0'){
            swaps=swaps + (i-lArr);
            //cout<<"Swaps: "<<swaps<<endl;
            lArr++;
            //cout<<"lArr increased. - "<<lArr<<endl;
            //continue;
        }
        // else if(arr[i]==1){
        //     if(lArr==i){
        //         cout<<"lArr increased."<<endl;
        //         lArr++;    
        //     }
        // }
        else if((arr[i]=='0') && (i==lArr)){
            //cout<<"lArr increased."<<endl;
            lArr=lArr+1;
        }
        
        //cout<<"lArr is: "<<lArr<<endl<<endl;
        
    }
    return swaps;
}
};