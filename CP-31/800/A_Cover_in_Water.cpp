//you have given the string which conatin . (empty) and #(blocked) 
    /*
        1. operation one - fill empty cell with water 
        2. if any cell is filled with water you can put those water into another cell 
        3. if i-1 and i+1 cell's are filled with water then ith cell will automatically filled with water 
        return the minimum required 1 operation in order to fill up all of the cells 

        solution: 
        1. we find if their any continuous 3 empty cells then ans is 2 as we just use the opration 2 in the middle cell and fill every cell using this water and this middle cell with automtically filled with water after every second.
        2. if we don't found it then the number of operations 1 we required is count of '.'
    */ 
 #include<bits/stdc++.h>
 using namespace std;
 int main (){
    int t ; 
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        bool hasTriple = false;
        for(int i =1;i<n-1;i++){
            if(s[i]=='.' && (s[i-1]=='.' && s[i+1]=='.')){
                hasTriple = true;
                break;
            }
        }
        if(hasTriple){
            cout<<2<<"\n";
        }else{
            int count = 0 ;
            for(char ch : s){
                if(ch=='.') count++;
            }
            cout<<count<<"\n";
        }
    }
    return 0;
 }