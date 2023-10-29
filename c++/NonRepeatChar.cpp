#include<bits/stdc++.h>

using namespace std;
class Solution{
    public:
        void nonRepeatingChar(string & st){
            int l = st.length();
            int freq[100];
            for(int i=0; i<l; i++){
                freq[i]=1;
                for(int j=i+1; j<l; j++){
                    if(st[i]==st[j]){
                        freq[i]++;
                        st[j] = '-';
                    }
                }
            }
            for(int i=0; i<l; i++){
                if(freq[i]==1 && st[i]!=' ' && st[i]!='-'){
                    st[i]= tolower(st[i]); //convert into lowercase
                    cout<<st[i]<<" ";
                }
            }
        }
};
int main(){
    string str;
    cout<< "Enter a String: ";
    getline(cin,str);
    Solution obj;  
    cout<<"Non-Repeating Characters: ";
    obj.nonRepeatingChar(str);
    return 0;
}
