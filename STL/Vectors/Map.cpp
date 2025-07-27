#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 10000;
    m["headphones"] = 2000;
    m["tablet"] = 120;
    m["watch"] = 400;

    m.insert({"phone", 1000});
    m.emplace("camera", 1500);

    for(auto p: m){
        cout << p.first<<" "<<p.second<<endl;
    }

    if(m.find("camera") != m.end()){
        cout<< "camera is present"<<endl;
    }
    else{
        cout<< "camera is not present"<<endl;   //count = 1
    }

    cout<< "count = " << m. count("laptop") <<endl;
    return 0;
}


//Multi Map
    multimap<string, int> m;

    m.emplace("tv", 10);
    m.emplace("tv" ,10);
    m.emplavce("tv", 10);
    
    m.erase(m. find("tv"));

    for(auto p: m){
        cout<< p.first << " " << p.second << endl;
    }
    return 0;   //output is tv 100, tv 10

// ans printed as default sorted string 

//output ---
// headphones 2000
// laptop 10000
// tablet 120
// tv 100
// watch 400


// camera 1500
// headphones 2000
// laptop 10000
// phone 1000
// tablet 120
// tv 100
// watch 400