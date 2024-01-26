class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<string> temp;
        for(string i: operations){
            if(i=="+"){
                string ele;
                int a= stoi(*(temp.end()-1));
                int b= stoi(*(temp.end()-2));
                int res=a+b;
                ele=to_string(res);
                temp.push_back(ele);
            }else if(i=="D"){
                int a= stoi(*(temp.end()-1));
                int b=2*a;
                temp.push_back(to_string(b));
            }else if(i=="C"){
                temp.pop_back();
            }else{
                temp.push_back(i);
            }
        }
        int sum=0;
        for(string i: temp){
            int a=stoi(i);
            sum+=a;
        }
        return sum;
    }
};