#include<iostream>
#include<vector>
using namespace std;

struct to{
    int first,second;
};
to moves[]={
    {0,1},{-1,1},{-1,0},{-1,-1},{0,-1},{1,-1},{1,0},{1,1}//資料格式：y,x
};

int fong=0;
int nowFong=0;
pair<int,int> start;
vector<vector<int>> datas;
int wouldInY,wouldInX;
bool runed=false;

void run(pair<int,int> place){
    if(place.first==start.first&&place.second==start.second&&runed==true)return;
    bool right=true;
    if(fong==6)fong=0;
    else if(fong==7)fong=1;
    else fong +=2;
    runed=true;
    for(;;){
        to d=moves[fong];
        if(place.first+d.first>=0&&place.second+d.second>=0&&place.first+d.first<wouldInY&&place.second+d.second<wouldInX){
            nowFong=fong;
            if(datas[place.first+d.first][place.second+d.second]){
                cout<<nowFong;
                pair<int,int> next;
                next.first=place.first+d.first;
                next.second=place.second+d.second;
                run(next);
                break;
            }
        }
        if(fong==0){
            fong=7;
        }else{
            fong--;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>wouldInY>>wouldInX;
    datas.resize(wouldInY);
    for(vector<int>& d:datas){
        d.resize(wouldInX);
        for(int& num:d){
            cin>>num;
        }
    }
    for(int i=0;i<wouldInY;i++){
        int keep=true;
        for(int k=0;k<wouldInX;k++){
            if(datas[i][k]==1){
                start.first=i;
                start.second=k;
                keep=false;
                break;
            }
        }
        if(!keep)break;
    }
    run(start);
}
