#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

vector<int> a={1,5,2,1,4,0};
vector<int> b={};
vector<vector<int>> c={};
vector<int>::iterator p,q;
int licznik=0;
int g,s;
for(int i=0;i<a.size();i++){
    for(int j=i-a[i];j<=i+a[i];j++){
        b.push_back(j);
    }
    c.push_back(b);
    b={};
}

for (int i = 0; i < c.size(); i++) {
        for (int j = i+1; j < c.size(); j++){
            if(c[i].size()>c[j].size()){
                    cout<<"wieksze aktualne"<<endl;
                for(int x=0;x<c[i].size();x++){
                    cout<<c[i][x];
                }cout<<endl<<"i: " << i;
                cout<<endl;
                g=c[i][c[i].size()-1];
                s=c[i][0];
                p = find(c[j].begin(), c[j].end(), g);
                q = find(c[j].begin(), c[j].end(), s);
            cout<<"P: "<<*p<<" "<<g<<" Q: "<<*q<<" "<<s<<endl;
                if (p!=c[j].end()||q!=c[j].end()){
                    cout<<"przecina 1"<<endl;
                    licznik++;
                }else{cout<<"nie przecina"<<endl;}
            }
            else{
                cout<<"wieksze porownywalne"<<endl;
               for(int x=0;x<c[j].size();x++){
                    cout<<c[j][x];
                }cout<<endl<<"j: " << j;
                cout<<endl;
                g=c[j][c[j].size()-1];
                s=c[j][0];
                p = find(c[i].begin(),c[i].end(),g);
                q = find(c[i].begin(),c[i].end(),s);
            cout<<"P: "<<*p<<" "<<g<<" Q: "<<*q<<" "<<s<<endl;
                if (p!=c[j].end()||q!=c[j].end()){
                    cout<<"przecina 2"<<endl;
                    licznik++;
                }else{cout<<"nie przecina"<<endl;}
            }
        }
        cout << endl;
}
cout<<licznik;
return 0;
}
