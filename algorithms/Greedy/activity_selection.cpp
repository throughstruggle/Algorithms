#include<bits/stdc++.h>
using namespace std;

bool sort_by_sec(const pair<int,int> & a,const pair<int,int> &b){
    return a.second < b.second;
}



int main(){
    
    int n;
    cin>>n;
    n++;
    int a,b;
    
    vector< pair<int,int> > points(n);
     points[0] = make_pair(0,0);
    
    for(int i=1 ; i<n ; ++i)
    {
        cin>>a>>b;
        points[i] = make_pair(a,b);
    }
    
    sort(points.begin(),points.end(),sort_by_sec);
    
    int k=0;
    
    vector< pair<int,int> > ans;
    
    for(int i=1;i<n ;++i){
        if(points[i].first > points[k].second){
            ans.push_back(points[i]);
            k = i;
        }
    }
    
    for(auto x:ans)
    {
        cout<<"("<<x.first<<","<<x.second<<")"<<endl;
    }
    
}