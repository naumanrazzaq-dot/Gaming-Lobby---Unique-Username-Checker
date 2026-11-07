#include <iostream>
#include <queue>
#include <string>
#include <stack>
#include<set>
using namespace std;
int main(){
    set<string> s;
    s.insert("shadow");
    s.insert("Ace");
    s.insert("cyber");
    s.insert("cyber");
    for(auto val: s){
        cout<<val<<endl;
    }
}