#include <bits/stdc++.h>
using namespace std;
int main(){
    // vector <int> v ={2,3,6,8,9};
    // //vector <int> :: iterator it = v.begin();

    // for(auto it = v.begin();it!=v.end();it++){
    //     cout<<(*it)<<endl;
    // }

    //MAPS

    map<int,string> m;
    m[1]="abc";
    m[3]="cde";
    m.insert({4,"efg"});
    cout<<m.size()<<endl;

    map <int,string> :: iterator it;
    m.erase(1);
    auto a = m.find(3);
    for(it = m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<a->first<<" "<<a->second<<endl;
    
}