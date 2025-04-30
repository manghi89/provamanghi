#include <bits/stdc++.h>

using namespace std;
int dim=6;
int vetpos(int v[],int dim){
    if (dim==0)return 0;
    if(v[dim-1]>=0) return 1+vetpos(v,dim-1);
    else return vetpos(v,dim-1);



}
int vetneg(int v[],int dim){
    if (dim==0)return 0;
    if(v[dim-1]<0) return v[dim-1]+vetneg(v,dim-1);
    else return vetneg(v,dim-1);



}
string primalett(string vett[],int dim){
    if(dim==0)return "";
    else return vett[dim-1].substr(0,1)+primalett(vett,dim-1);




}


int main(){
 int v[]={1,-4,-2,54,3,-2};
 cout<<vetpos(v,dim)<<endl;
 cout<<vetneg(v,dim)<<endl;
 string vett[]={"hola","negro","sporco","marmellata"};
 cout<<primalett(vett,4);
}
