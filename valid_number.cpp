#include<iostream> 

using namespace std; 

public Solution{
public: 
  bool validNumber(string s){
       int n = s.size(); 
       bool ise = false, isnum = false, isdot = false; 
       for (int i=0; i<n; ++i){
         if (isdigit(s[i])) isnum =true; 
         else if(s[i] == '+' || s[i]=='-'){
           if(i>0 && tolower(s[i-1])!='e') return false; 
         }else if(tolower(s[i])=='e'){
           if(ise || !isnum) return false; 
           ise = true; 
           isnum = false; 
         }else if(s[i]=='.'){
             if(ise || isdot) return false; 
             isdot = true; 
         }else return false; 
       }
       return isnum; 
  }
};
