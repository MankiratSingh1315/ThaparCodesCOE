#include <iostream>
using namespace std;

string concatenteStrings(string s1, string s2){
    return s1+s2;
}

string reverseString(string s){
    string newStr="";
    for(int i=s.length()-1;i>=0;i--){
        newStr+=s[i];
    }
    return newStr;
}

string deleteVowels(string s){
    string newStr="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'){
            newStr+=s[i];
        }
    }
    return newStr;
}

string sortAlhabetically(string s){
    string newStr="";
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]>s[j]){
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    return s;
}

string lowerToUpperCase(string s){
    string newStr="";
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            newStr+=s[i]-32;
        }
        else{
            newStr+=s[i];
        }
    }
    return newStr;
}

int main() {
    string s1="hello";
    string s2="World";
    string newStr=concatenteStrings(s1,s2);
    cout<<newStr<<endl;

    string revStr=reverseString(newStr);
    cout<<revStr<<endl;

    string delVowels=deleteVowels(revStr);
    cout<<delVowels<<endl;

    string sortedStr=sortAlhabetically(s1);
    cout<<sortedStr<<endl;

    string upperStr=lowerToUpperCase(s1);
    cout<<upperStr<<endl;
    return 0;
}