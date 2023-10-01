// code by chat gpt which I can't understand

#include <iostream>
#include <queue>
using namespace std;

const int MAX_CHAR=26;

void firstNonRepeatingChar(string s){
    queue<char> q;
    int freq[MAX_CHAR]={0};
    for(int i=0;i<s.length();i++){
        char c=s[i];
        freq[c-'a']++;
        q.push(c);
        while(!q.empty()){
            if(freq[q.front()-'a']>1){
                q.pop();
            }
            else{
                cout<<q.front()<<" ";
                break;
            }
        }
        if(q.empty()){
            cout<<"-1 ";
        }
    }
    cout<<endl;
}

int main() {
    string s="aabc";
    cout<<"String: "<<s<<endl;
    cout<<"First non-repeating characters: ";
    firstNonRepeatingChar(s);
    return 0;
}